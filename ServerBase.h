#pragma once
//#pragma comment(lib, "ws2_32")
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <process.h>

#include "ListenSocket.h"
#include "ClientSocket.h"

#include <functional>
#include <vector>
#include "Int.h"

class ServerBase
{
public:
	ServerBase(Int port = 9000);
	~ServerBase();
	void Run();
private:
	//base data
	WSADATA wsa;
	Int port;
	Int result;
	ListenSocket* lSocket;
	SOCKET newSocket;
	HANDLE threadHandle;
	std::vector<ClientSocket*>* cSockets;

	//base function
	bool InitializeServer();
	bool IsWSAStartFailed();
	void AcceptClients();

	//service
	//std::vector<std::function<void(ClientSocket*)>> services;
	static unsigned int __stdcall StateSwitch(void* obj);

};