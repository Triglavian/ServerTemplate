#pragma once
#include "FileTransSubState.h"
#include "ClientSocket.h"

class FileTransition
{
public:
	FileTransition();
	~FileTransition();
	//getter

	//setter

	//service
	void StateSwitch(ClientSocket* cSocket);
private:
	//base data
	FileTransSubState state;

	//service
	FileTransition(const FileTransition& tr
);
};

