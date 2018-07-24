// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubWrapperBase_custom.h file.

#ifndef STUB_RULESETS_PYTHON_WRAPPERBASE_H
#define STUB_RULESETS_PYTHON_WRAPPERBASE_H

#include "rulesets/python/WrapperBase.h"
#include "stubWrapperBase_custom.h"

#ifndef STUB_WrapperBase_WrapperBase
//#define STUB_WrapperBase_WrapperBase
  template <typename TValue,typename TPythonClass>
   WrapperBase<TValue,TPythonClass>::WrapperBase(Py::PythonClassInstance* self, Py::Tuple& args, Py::Dict& kwds)
    : Py::PythonClass(self, args, kwds)
  {
    
  }
#endif //STUB_WrapperBase_WrapperBase

#ifndef STUB_WrapperBase_wrap
//#define STUB_WrapperBase_wrap
  template <typename TValue,typename TPythonClass>
   Py::Object WrapperBase<TValue,TPythonClass>::wrap(TValue value)
  {
    return *static_cast< Py::Object*>(nullptr);
  }
#endif //STUB_WrapperBase_wrap

#ifndef STUB_WrapperBase_value
//#define STUB_WrapperBase_value
  template <typename TValue,typename TPythonClass>
   TValue& WrapperBase<TValue,TPythonClass>::value(const Py::Object& object)
  {
    return *static_cast< TValue*>(nullptr);
  }
#endif //STUB_WrapperBase_value

#ifndef STUB_WrapperBase_WrapperBase
//#define STUB_WrapperBase_WrapperBase
  template <typename TValue,typename TPythonClass>
   WrapperBase<TValue,TPythonClass>::WrapperBase(Py::PythonClassInstance* self, TValue value)
    : Py::PythonClass(self, value)
  {
    
  }
#endif //STUB_WrapperBase_WrapperBase


#endif