#pragma once

enum class Protocol
{
	P_DISCONNECTION = 0,	//disconnection protocol, recivec if opps socket is closed
	P_INVALIDPROT,


#define P_DISCON	Protocol::P_DISCONNECTION
#define P_INVALID	Protocol::P_INVALIDPROT
};