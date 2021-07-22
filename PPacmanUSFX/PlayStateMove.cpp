#include "PlayStateMove.h"





PlayStateMove::~PlayStateMove()
{
	



}

void PlayStateMove::ComerMonedas()
{


}

void PlayStateMove::on(stateMachine* state, GamePawn* pacman)
{
	cout << "playstate";
    if (pacman->getTileActual() != nullptr && pacman->getTileActual()->getFantasma() != nullptr) {
      cout << "esta111";
      SDL_Rect* eatingHole = new SDL_Rect({

          pacman->getPosicionX() /*+ Point::Margin*/,
          pacman->getPosicionY() /*+ Point::Margin*/,
          pacman->getAncho(),
          pacman->getAlto(),
          });

      if (pacman->revisarColision(eatingHole, pacman->getTileSiguiente()->getFantasma()->getColisionador())) {
          pacman->getTileSiguiente()->getFantasma()->deleteGameObject();
      }
  }

}




