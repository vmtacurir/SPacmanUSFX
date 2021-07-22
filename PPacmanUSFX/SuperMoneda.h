#pragma once
#include "Moneda.h"
#include "GameActor.h"

#include <iostream>
using namespace std;


class SuperMoneda :
    public GameActor
{
protected:
   
   // stateMachine fsm;
    int estado;
public:

    SuperMoneda(Tile* _tile, Texture* _textura);

    void setTileActual(Tile* _tileNuevo);


    void handleEvent(SDL_Event* event) {};
    void deleteGameObject() override;
};

