#include "stdafx.h"
#include "GameComponentBuilder.h"

GameComponentBuilder::GameComponentBuilder() {
	this->reset();
}

GameComponentBuilder::~GameComponentBuilder() {
	if (components) delete components;
}

void GameComponentBuilder::reset() {
	components = new GameComponent;
}

void GameComponentBuilder::setProduct() {
	PacmanBuilder pacmanBuilder;
	MapBuilder mapBuilder;
	MonstersBuilder monsterBuilder;

	pacmanBuilder.setProduct();
	mapBuilder.setProduct();
	monsterBuilder.setProduct();

	components->add(pacmanBuilder.getProduct());
	components->add(mapBuilder.getProduct());
	components->add(monsterBuilder.getProduct());
}

GameComponent* GameComponentBuilder::getProduct() {
	GameComponent* result = components;
	this->reset();
	return result;
}
