// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubInternalProperties_custom.h file.

#include "rulesets/InternalProperties.h"
#include "stubInternalProperties_custom.h"

#ifndef STUB_RULESETS_INTERNALPROPERTIES_H
#define STUB_RULESETS_INTERNALPROPERTIES_H

#ifndef STUB_SetupProperty_SetupProperty
//#define STUB_SetupProperty_SetupProperty
   SetupProperty::SetupProperty()
    : Property()
  {
    
  }
#endif //STUB_SetupProperty_SetupProperty

#ifndef STUB_SetupProperty_copy
//#define STUB_SetupProperty_copy
  SetupProperty* SetupProperty::copy() const
  {
    return nullptr;
  }
#endif //STUB_SetupProperty_copy

#ifndef STUB_SetupProperty_install
//#define STUB_SetupProperty_install
  void SetupProperty::install(LocatedEntity *, const std::string &)
  {
    
  }
#endif //STUB_SetupProperty_install


#ifndef STUB_TickProperty_TickProperty
//#define STUB_TickProperty_TickProperty
   TickProperty::TickProperty()
    : Property()
  {
    
  }
#endif //STUB_TickProperty_TickProperty

#ifndef STUB_TickProperty_copy
//#define STUB_TickProperty_copy
  TickProperty* TickProperty::copy() const
  {
    return nullptr;
  }
#endif //STUB_TickProperty_copy

#ifndef STUB_TickProperty_apply
//#define STUB_TickProperty_apply
  void TickProperty::apply(LocatedEntity *)
  {
    
  }
#endif //STUB_TickProperty_apply


#ifndef STUB_SimpleProperty_SimpleProperty
//#define STUB_SimpleProperty_SimpleProperty
   SimpleProperty::SimpleProperty()
    : PropertyBase()
  {
    
  }
#endif //STUB_SimpleProperty_SimpleProperty

#ifndef STUB_SimpleProperty_get
//#define STUB_SimpleProperty_get
  int SimpleProperty::get(Atlas::Message::Element & val) const
  {
    return 0;
  }
#endif //STUB_SimpleProperty_get

#ifndef STUB_SimpleProperty_set
//#define STUB_SimpleProperty_set
  void SimpleProperty::set(const Atlas::Message::Element & val)
  {
    
  }
#endif //STUB_SimpleProperty_set

#ifndef STUB_SimpleProperty_copy
//#define STUB_SimpleProperty_copy
  SimpleProperty* SimpleProperty::copy() const
  {
    return nullptr;
  }
#endif //STUB_SimpleProperty_copy

#ifndef STUB_SimpleProperty_apply
//#define STUB_SimpleProperty_apply
  void SimpleProperty::apply(LocatedEntity *)
  {
    
  }
#endif //STUB_SimpleProperty_apply


#endif