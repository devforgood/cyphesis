// Cyphesis Online RPG Server and AI Engine
// Copyright (C) 2009 Alistair Riddoch
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

// $Id$

#ifndef TOOLS_INTERACTIVE_H
#define TOOLS_INTERACTIVE_H

#include "AdminClient.h"

#include "common/OperationRouter.h"

#include <sigc++/trackable.h>

/// \brief Class template for clients used to connect to and administrate
/// a cyphesis server.
class Interactive : public AdminClient,
                    virtual public sigc::trackable
{
  private:
    bool avatar_flag, server_flag;
    std::string agentId;
    std::string agentName;
    std::string serverName;
    std::string systemType;
    std::string prompt;
    bool exit;

  protected:
    virtual void appearanceArrived(const Operation &);
    virtual void disappearanceArrived(const Operation &);
    virtual void infoArrived(const Operation &);
    virtual void errorArrived(const Operation &);
    virtual void sightArrived(const Operation &);
    virtual void soundArrived(const Operation &);

  public:
    Interactive();
    ~Interactive();

    int setup();
    void exec(const std::string & cmd, const std::string & arg);
    void loop();
    void select(bool rewrite_prompt = true);
    void updatePrompt();
    void runCommand(char *);

    static void gotCommand(char *);
};

#endif // TOOLS_INTERACTIVE_H
