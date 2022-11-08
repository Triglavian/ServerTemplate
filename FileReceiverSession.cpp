#include "FileTransitionSession.h"

FileTransitionSession::FileTransitionSession()
{
    state = WAIT;
    writeDirectory = "";
    fileName = "";
}

FileTransitionSession::~FileTransitionSession()
{
}

Protocol FileTransitionSession::GetProtocol()
{
    return protocol;
}

std::string FileTransitionSession::Serialize()
{
    return std::string();
}

FileTransSubState FileTransitionSession::GetState()
{
    return state;
}
