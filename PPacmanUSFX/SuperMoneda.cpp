#include "SuperMoneda.h"

SuperMoneda::SuperMoneda(Tile* _tile, Texture* _textura):GameActor(_textura)
{
	tileActual = _tile;

	if (tileActual != nullptr) {
		tileActual->setSuperMoneda(this);

		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionY() * Tile::altoTile;

		ancho = Tile::anchoTile;
		alto = Tile::altoTile;
	}
	else {
		posicionX = 0;
		posicionY = 0;
	}

	colisionador->x = posicionX;
	colisionador->y = posicionY;

}

void SuperMoneda::setTileActual(Tile* _tileNuevo) {

	if (tileActual != nullptr) {
		tileActual->setSuperMoneda(nullptr);
	}

	tileActual = _tileNuevo;

	if (tileActual != nullptr) {
		tileActual->setSuperMoneda(this);

		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionY() * Tile::altoTile;
	}
	else {
		posicionX = 0;
		posicionY = 0;
	}
}
void SuperMoneda::deleteGameObject()
{
	GameObject::deleteGameObject();
	tileActual->setSuperMoneda(nullptr);
}
