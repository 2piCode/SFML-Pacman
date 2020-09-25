#include "stdafx.h"

MonstersBuilder::MonstersBuilder() {
	this->reset();
}

MonstersBuilder::~MonstersBuilder() {
	if (monster) delete monster;
}

void MonstersBuilder::reset() {
	monster = new Monster;
}

void MonstersBuilder::setProduct() {
	PinkBuilder pinkBuilder;
	RedBuilder redBuilder;
	BlueBuilder blueBuilder;

	pinkBuilder.setProduct();
	redBuilder.setProduct();
	blueBuilder.setProduct();

	monster->add(pinkBuilder.getProduct());
	monster->add(redBuilder.getProduct());
	monster->add(blueBuilder.getProduct());
}

Monster* MonstersBuilder::getProduct() {
	Monster* result = monster;
	this->reset();
	return result;

}

PinkBuilder::PinkBuilder() {
	this->reset();
}

PinkBuilder::~PinkBuilder() {
	if (pink) delete pink;
}

void PinkBuilder::reset() {
	pink = new Pink;
}

void PinkBuilder::setProduct() {
	pink->setStartPosition(sf::Vector2f(9 * BLOCK_SIZE, 13 * BLOCK_SIZE));
}

Pink* PinkBuilder::getProduct() {
	Pink* result = pink;
	this->reset();
	return result;
}

RedBuilder::RedBuilder() {
	this->reset();
}

RedBuilder::~RedBuilder() {
	if (red) delete red;
}

void RedBuilder::reset() {
	red = new Red;
}

void RedBuilder::setProduct() {
	red->setStartPosition(sf::Vector2f(9 * BLOCK_SIZE, 12 * BLOCK_SIZE));
}

Red* RedBuilder::getProduct() {
	Red* result = red;
	this->reset();
	return result;
}

BlueBuilder::BlueBuilder() {
	this->reset();
}

BlueBuilder::~BlueBuilder() {
	if (blue) delete blue;
}

void BlueBuilder::reset() {
	blue = new Blue;
}

void BlueBuilder::setProduct() {
	blue->setStartPosition(sf::Vector2f(9 * BLOCK_SIZE, 11 * BLOCK_SIZE));
}

Blue* BlueBuilder::getProduct() {
	Blue* result = blue;
	this->reset();
	return result;
}
