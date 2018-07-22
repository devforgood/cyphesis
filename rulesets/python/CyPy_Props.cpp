/*
 Copyright (C) 2018 Erik Ogenvik

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <rulesets/Py_Message.h>
#include "CyPy_Props.h"
#include "rulesets/LocatedEntity.h"

CyPy_Props::CyPy_Props(Py::PythonClassInstance* self, Py::Tuple& args, Py::Dict& kwds)
    : PythonClass(self, args, kwds)
{

}

void CyPy_Props::init_type()
{
    behaviors().name("Properties");
    behaviors().doc("");

    behaviors().readyType();
}

Py::Object CyPy_Props::getattro(const Py::String& name)
{
    auto nameStr = name.as_string();

    auto prop = m_value->getProperty(nameStr);
    if (prop) {
        //Check if it's a special prop
//        if (dynamic_cast<const StatisticsProperty*>(prop) || dynamic_cast<const TerrainProperty*>(prop)
//            || dynamic_cast<const TerrainModProperty*>(prop)) {
//            PyObject* ret = Property_asPyObject(prop, locatedEntity);
//            if (ret) {
//                return ret;
//            }
//        } else {
        Atlas::Message::Element element;
        // If this property is not set with a value, return none.
        if (prop->get(element) == 0) {
            auto object = MessageElement_asPyObject(element);
            return Py::Object(object);
        }
//        }
    }
    return Py::None();
}

int CyPy_Props::setattro(const Py::String& name, const Py::Object& attr)
{
    auto nameStr = name.as_string();

    Atlas::Message::Element obj;
    if (PyObject_asMessageElement(attr.ptr(), obj, false) == 0) {

        m_value->setAttr(name, obj);
        return 0;
    } else {
        log(WARNING, "Value submitted to Props.set can not be converted to an Atlas Message.");
        throw Py::AttributeError(name);
    }
}