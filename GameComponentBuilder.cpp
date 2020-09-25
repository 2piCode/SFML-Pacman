#include "stdafx.h"
#include "GameComponentBuilder.h"

GameClassBuilder::GameClassBuilder() {
	this->reset();
}

void GameClassBuilder::reset() {
	if (components) delete components;
	components = new GameComponent;
}

void GameClassBuilder::setProduct() {
	PacmanBuilder pacmanBuilder;
	pacmanBuilder.setProduct();
	components->add(pacmanBuilder.getProduct());
	MapBuilder mapBuilder;
	mapBuilder.setProduct();
	components->add(mapBuilder.getProduct());
}
