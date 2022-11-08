#pragma once
#include "ISession.h"
#include <iostream>
#include "FileTransSubState.h"

class FileTransitionSession : public ISession
{
public:
	FileTransitionSession();
	~FileTransitionSession();
	Protocol GetProtocol();
	std::string Serialize();
	FileTransSubState GetState();
private:
	FileTransSubState state;
	std::string writeDirectory;
	std::string fileName;
};

