#include "Monster.h"

#define size_map_y 22
#define size_map_x 26

Monster::Monster() {
	texture.loadFromFile("ghost-blue.png");
	shape.setTexture(texture);
	shape.setTextureRect(sf::IntRect(30,2,32,28));
	shape.setPosition(380, 322);
	direction = RIGHT;
	speed = 0.15;
}

void Monster::move(Map& _map) {
	switch (direction) {
	case UP: {
		shape.move(0, -speed);
		if (checkWallIntersects(_map)) {
			direction = STAY;
			shape.move(0, speed);
		}
		break;
	}
	case DOWN: {
		shape.move(0, speed);
		if (checkWallIntersects(_map)) {
			direction = STAY;
			shape.move(0, -speed);
		}
		break;
	}
	case LEFT: {
		shape.move(-speed, 0);
		if (checkWallIntersects(_map)) {
			direction = STAY;
			shape.move(speed, 0);
		}
		break;
	}
	case RIGHT: {
		shape.move(speed, 0);
		if (checkWallIntersects(_map)) {
			direction = STAY;
			shape.move(-speed, 0);
		}
		break;
	}
	}
}

void Monster::draw(sf::RenderWindow& window) {
	window.draw(shape);
}

bool Monster::checkWallIntersects(Map& _map)
{
	for (size_t i = 0; i < size_map_y; i++) {
		for (size_t j = 0; j < size_map_x; j++) {
			if (shape.getGlobalBounds().intersects(_map.getPointer()[i][j].getShape().getGlobalBounds())) {
				if (_map.getPointer()[i][j].getCategory() == WALL) return true;
			}
		}
	}
	return false;
}
	