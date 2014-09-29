/*
 Copyright (C) 2014 Erik Ogenvik

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
#ifndef STUBADMIN_H_
#define STUBADMIN_H_


Admin::Admin(Connection * conn,
             const std::string & username,
             const std::string & passwd,
             const std::string & id,
             long intId) :
       Account(conn, username, passwd, id, intId)
{
}

Admin::~Admin()
{
}

const char * Admin::getType() const
{
    return "admin";
}

void Admin::addToMessage(MapType & omap) const
{
}

void Admin::addToEntity(const Atlas::Objects::Entity::RootEntity & ent) const
{
}

int Admin::characterError(const Operation & op,
                          const Root & ent, OpVector & res) const
{
    return 0;
}

void Admin::createObject(const std::string & type_str,
                           const Root & arg,
                           const Operation & op,
                           OpVector & res)
{
}

LocatedEntity * Admin::createCharacterEntity(const std::string &,
                                const Atlas::Objects::Entity::RootEntity &,
                                const Atlas::Objects::Root &)
{
    return 0;
}


void Admin::LogoutOperation(const Operation & op, OpVector & res)
{
}

void Admin::GetOperation(const Operation & op, OpVector & res)
{
}

void Admin::SetOperation(const Operation & op, OpVector & res)
{
}

void Admin::OtherOperation(const Operation & op, OpVector & res)
{
}


#endif /* STUBADMIN_H_ */
