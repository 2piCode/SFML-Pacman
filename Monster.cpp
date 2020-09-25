#include "stdafx.h"

Monster::Monster() {
	direction = SPAWN;
	speed = 0.15;
	shape.setSize(sf::Vector2f(31.f, 31.f));
}

void Monster::move(Map& _map) {
	srand(time(NULL));
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
		shape.setTextureRect(frame_eyes_left);
		shape.move(-speed, 0);
			if (checkWallIntersects(_map)) {
				direction = STAY;
				shape.move(speed, 0);
			}
			break;
		}
		case RIGHT: {
			shape.setTextureRect(frame_eyes_right);
			shape.move(speed, 0);
			if (checkWallIntersects(_map)) {
				direction = STAY;
				shape.move(-speed, 0);	
			}
			break;
		}
		case STAY: {
			shape.setTextureRect(frame_eyes_center);
			int choise = rand() % 4 + 1; 
			if (choise == 1) direction = RIGHT;
			else if (choise == 2) direction = LEFT;
			else if (choise == 3) direction = UP;
			else if (choise == 4) direction = DOWN;
		}
		}
}

void Monster::draw(sf::RenderWindow& window) const {
	window.draw(shape);
}

bool Monster::checkWallIntersects(Map& _map) {
	for (size_t i = 0; i < size_map_y; i++) {
		for (size_t j = 0; j < size_map_x; j++) {
			if (shape.getGlobalBounds().intersects(_map.getPointer()[i][j].getShape().getGlobalBounds())) {
				if (_map.getPointer()[i][j].getCategory() == WALL) return true;
			}
		}	
	}
	return false;
}

bool Monster::checkPacmanIntersects(Pacman& pacman)
{
	if (shape.getGlobalBounds().intersects(pacman.getGlobalBounds())) return true;
	return false;
}

void Monster::setStartPosition(sf::Vector2f position) {
	shape.setPosition(position);
}

Pink::Pink() {
	texture.loadFromFile("ghost-pink.png");
	shape.setTexture(&texture);
	shape.setTextureRect(frame_eyes_center); 
}

void Pink::release(sf::Clock& clock, sf::Vector2f position) {
	if (clock.getElapsedTime().asSeconds() > 5.00 and clock.getElapsedTime().asSeconds() < 5.50) {
		shape.setPosition(position);
		direction = RIGHT;
	}
}

Red::Red() {
	texture.loadFromFile("ghost-red.png");
	shape.setTexture(&texture);
	shape.setTextureRect(frame_eyes_center);
}

void Red::release(sf::Clock& clock, sf::Vector2f position) {
	if (clock.getElapsedTime().asSeconds() > 8.00 and clock.getElapsedTime().asSeconds() < 8.50) {
		shape.setPosition(position);
		direction = LEFT;
	}
}

Blue::Blue() {
	texture.loadFromFile("ghost-blue.png");
	shape.setTexture(&texture);
	shape.setTextureRect(frame_eyes_center);
}

void Blue::release(sf::Clock& clock, sf::Vector2f position) {
	if (clock.getElapsedTime().asSeconds() > 11.00 and clock.getElapsedTime().asSeconds() < 11.50) {
		shape.setPosition(position);
		direction = RIGHT;
	}
}
