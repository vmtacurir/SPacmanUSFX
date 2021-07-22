#pragma once
#include "GameState.h"


#include <stdlib.h>
#include <iostream>

#include "Fantasma.h"


using namespace std;
class PlayStateMove :
    public GameState
{


public:
	//virtual member is a member function that can be redefined in a derived class
	PlayStateMove() {};
	~PlayStateMove();
	void ComerMonedas();
	//void on(stateMachine* m);
	 void on(stateMachine* state, GamePawn* pacman);//load

	 void off(stateMachine* state, GamePawn* pacman) {};
	 //
};

