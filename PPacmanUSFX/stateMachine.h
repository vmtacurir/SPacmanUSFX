#pragma once
#include <vector>
#include "PlayStateMove.h"
//#include "GamePawn.h"


class GamePawn;


class stateMachine
{
protected:
	class GameState* gamestate;
	

public:
	stateMachine();

	~stateMachine() {};
	void ComerMonedas(GameState* state);


	void on(GamePawn* pacman);
	void Off();


	//GameState* getGameStates() { return gamestate; }
};

