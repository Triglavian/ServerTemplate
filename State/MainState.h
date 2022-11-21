#pragma once
enum class MainState 
{
	E_MAIN,
	E_DISCONNECTED,

#define MAIN		MainState::E_MAIN
#define DISCON		MainState::E_DISCONNECTED
};