//Add custom implementations of stubbed functions here; this file won't be rewritten when re-generating stubs.
#include "rulesets/Task.h"
BaseWorld *BaseWorld::m_instance = 0;

#ifndef STUB_BaseWorld_BaseWorld
#define STUB_BaseWorld_BaseWorld

BaseWorld::BaseWorld()
        : m_defaultLocation(nullptr), m_limboLocation(nullptr) {
    m_instance = this;
}

#endif //STUB_BaseWorld_BaseWorld

#ifndef STUB_BaseWorld_getEntity
#define STUB_BaseWorld_getEntity

LocatedEntity *BaseWorld::getEntity(const std::string &id) const {
    long intId = strtol(id.c_str(), 0, 10);
    if (intId == 0 && id != "0") {
        intId = -1L;
    }
    EntityDict::const_iterator I = m_eobjects.find(intId);
    if (I != m_eobjects.end()) {
        assert(I->second != 0);
        return I->second;
    } else {
        return 0;
    }
}

#endif //STUB_BaseWorld_getEntity

#ifndef STUB_BaseWorld_getEntity
#define STUB_BaseWorld_getEntity
LocatedEntity* BaseWorld::getEntity(long id) const
{
    EntityDict::const_iterator I = m_eobjects.find(id);
    if (I != m_eobjects.end()) {
        assert(I->second != 0);
        return I->second;
    } else {
        return 0;
    }
}
#endif //STUB_BaseWorld_getEntity
