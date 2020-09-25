#include "stdafx.h"

PacmanBuilder::PacmanBuilder() {
	this->reset();
}

PacmanBuilder::~PacmanBuilder() {
	if (pacman) delete pacman;
}

void PacmanBuilder::reset() {
	if (pacman) delete pacman;
	this->pacman = new Pacman;
}

void PacmanBuilder::setProduct() {
	pacman->setStartPosition(sf::Vector2f(23 * BLOCK_SIZE, 22 * BLOCK_SIZE));
}

Pacman* PacmanBuilder::getProduct() {
	Pacman* product = pacman;
	this->reset();
	return product;
}
