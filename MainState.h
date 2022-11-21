#pragma once
enum class MainState 
{
	E_MAIN,
	E_WAITPLAYERS,
	E_PLAYGAME,
	E_DISCONNECTED,

#define MAIN		MainState::E_MAIN
#define WAITPLAYER	MainState::E_WAITPLAYERS
#define PLAY		MainState::E_PLAYGAME
#define DISCON		MainState::E_DISCONNECTED
};