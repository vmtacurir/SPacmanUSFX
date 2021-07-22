#include "stateMachine.h"

stateMachine::stateMachine()
{
	gamestate = new PlayStateMove();

}

void stateMachine::ComerMonedas(GameState* _state)
{
	gamestate = _state;
	
}

void stateMachine::on(GamePawn* pacman)
{
	gamestate->on(this , pacman);
}

void stateMachine::Off()
{
	gamestate->off(this,nullptr);
}

