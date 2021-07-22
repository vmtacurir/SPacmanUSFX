#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "GamePawn.h"

//#include "stateMachine.h"
class stateMachine;

using namespace std;


class GameState
{
public:
    virtual ~GameState() {};//destructor
    //virtual void update();//function like the functions in the Game class

    virtual void on(stateMachine* state, GamePawn* pacman) {};//load


    virtual void off(stateMachine* state, GamePawn* pacman) {};//clean
   
    
    GameState()
    {}
    //const function can not change data members
    //virtual std::string getStateID() const = 0;//ID is used to ensure that states don't get repeated
protected:
    //initialise some default values
    
   
 
};
