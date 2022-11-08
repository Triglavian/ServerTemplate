#include "FileTransition.h"

FileTransition::FileTransition()
{
	state = WAIT;
}

FileTransition::~FileTransition()
{
}

void FileTransition::StateSwitch(ClientSocket* cSocket)
{
	FileTransitionSession* state = dynamic_cast<FileTransitionSession*>(cSocket->GetSession());
	switch (state->GetState()) 
	{
		case WAIT:
			break;
		case RECVING:
			break;
		case RECVFIN:
			break;
		default:
	}
}

FileTransition::FileTransition(const FileTransition& trans)
{
}
