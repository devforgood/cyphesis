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

#ifndef CYPHESIS_CYPY_MEMMAP_H
#define CYPHESIS_CYPY_MEMMAP_H

#include <rulesets/MemMap.h>
#include "WrapperBase.h"

class CyPy_MemMap : public WrapperBase<MemMap*, CyPy_MemMap>
{
    public:
        CyPy_MemMap(Py::PythonClassInstance* self, Py::Tuple& args, Py::Dict& kwds);

        CyPy_MemMap(Py::PythonClassInstance* self, MemMap* value);

        static void init_type();

        Py::Object find_by_location(const Py::Tuple& args);
        PYCXX_VARARGS_METHOD_DECL(CyPy_MemMap, find_by_location)

        Py::Object find_by_type(const Py::Tuple& args);
        PYCXX_VARARGS_METHOD_DECL(CyPy_MemMap, find_by_type)

        Py::Object updateAdd(const Py::Tuple& args);
        PYCXX_VARARGS_METHOD_DECL(CyPy_MemMap, updateAdd)

        Py::Object delete_(const Py::Tuple& args);
        PYCXX_VARARGS_METHOD_DECL(CyPy_MemMap, delete_)

        Py::Object get(const Py::Tuple& args);
        PYCXX_VARARGS_METHOD_DECL(CyPy_MemMap, get)

        Py::Object get_add(const Py::Tuple& args);
        PYCXX_VARARGS_METHOD_DECL(CyPy_MemMap, get_add)

        Py::Object add_hooks_append(const Py::Tuple& args);
        PYCXX_VARARGS_METHOD_DECL(CyPy_MemMap, add_hooks_append)

        Py::Object update_hooks_append(const Py::Tuple& args);
        PYCXX_VARARGS_METHOD_DECL(CyPy_MemMap, update_hooks_append)

        Py::Object delete_hooks_append(const Py::Tuple& args);
        PYCXX_VARARGS_METHOD_DECL(CyPy_MemMap, delete_hooks_append)

        Py::Object find_by_filter(const Py::Tuple& args);
        PYCXX_VARARGS_METHOD_DECL(CyPy_MemMap, find_by_filter)

        Py::Object find_by_location_query(const Py::Tuple& args);
        PYCXX_VARARGS_METHOD_DECL(CyPy_MemMap, find_by_location_query)

        Py::Object add_entity_memory(const Py::Tuple& args);
        PYCXX_VARARGS_METHOD_DECL(CyPy_MemMap, add_entity_memory)

        Py::Object recall_entity_memory(const Py::Tuple& args);
        PYCXX_VARARGS_METHOD_DECL(CyPy_MemMap, recall_entity_memory)

};


#endif //CYPHESIS_CYPY_MEMMAP_H