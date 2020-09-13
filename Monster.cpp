#include "Monster.h"

Monster::Monster() {
	texture.loadFromFile("ghost-blue.png");
	shape.setTexture(texture);
	shape.setTextureRect(sf::IntRect(30,2,32,28));
	shape.setPosition(380, 322);
	direction = STAY;
}

void Monster::move() {
	switch (direction) {
	case UP: {

		break;
	}
	case DOWN: {

		break;
	}
	case LEFT: {

		break;
	}
	case RIGHT: {

		break;
	}
	}
}

void Monster::draw(sf::RenderWindow& window) {
	window.draw(shape);
}
	