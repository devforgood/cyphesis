// AUTOGENERATED file, created by the tool generate_stub.py, don't edit!
// If you want to add your own functionality, instead edit the stubClientConnection_custom.h file.

#ifndef STUB_CLIENT_CLIENTCONNECTION_H
#define STUB_CLIENT_CLIENTCONNECTION_H

#include "client/ClientConnection.h"
#include "stubClientConnection_custom.h"

#ifndef STUB_ClientConnection_operation
//#define STUB_ClientConnection_operation
  void ClientConnection::operation(const Atlas::Objects::Operation::RootOperation&)
  {
    
  }
#endif //STUB_ClientConnection_operation

#ifndef STUB_ClientConnection_ClientConnection
//#define STUB_ClientConnection_ClientConnection
   ClientConnection::ClientConnection(boost::asio::io_service& io_service)
    : AtlasStreamClient(io_service)
  {
    
  }
#endif //STUB_ClientConnection_ClientConnection

#ifndef STUB_ClientConnection_ClientConnection_DTOR
//#define STUB_ClientConnection_ClientConnection_DTOR
   ClientConnection::~ClientConnection()
  {
    
  }
#endif //STUB_ClientConnection_ClientConnection_DTOR

#ifndef STUB_ClientConnection_wait
//#define STUB_ClientConnection_wait
  int ClientConnection::wait()
  {
    return 0;
  }
#endif //STUB_ClientConnection_wait

#ifndef STUB_ClientConnection_sendAndWaitReply
//#define STUB_ClientConnection_sendAndWaitReply
  int ClientConnection::sendAndWaitReply(const Operation & op, OpVector & res)
  {
    return 0;
  }
#endif //STUB_ClientConnection_sendAndWaitReply

#ifndef STUB_ClientConnection_pop
//#define STUB_ClientConnection_pop
  Atlas::Objects::Operation::RootOperation ClientConnection::pop()
  {
    return *static_cast<Atlas::Objects::Operation::RootOperation*>(nullptr);
  }
#endif //STUB_ClientConnection_pop

#ifndef STUB_ClientConnection_pending
//#define STUB_ClientConnection_pending
  bool ClientConnection::pending()
  {
    return false;
  }
#endif //STUB_ClientConnection_pending


#endif