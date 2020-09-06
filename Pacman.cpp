#include "Pacman.h"

#define size_map_y 22
#define size_map_x 26

Pacman::Pacman() {
	direction = STAY;
	shape.setFillColor(sf::Color(255, 216, 0));
	shape.setRadius(5.f);
	shape.setPosition(400, 400);
    speed = 0.15;
}

void Pacman::keyboard(Map& _map)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        if (!checkWallIntersects(_map, UP)) {
            direction = UP;
        }
        else {
            direction = STAY;
            shape.move(0, speed);
        }
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        if (!checkWallIntersects(_map, DOWN)) {
            direction = DOWN;
        }
        else {
            direction = STAY;
            shape.move(0, -speed);
        }
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        if (!checkWallIntersects(_map, LEFT)) {
            direction = LEFT;
        }
        else {
            direction = STAY;
            shape.move(speed, 0);
        }
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        if (!checkWallIntersects(_map, RIGHT)) {
            direction = RIGHT;
        }
        else {
            direction = STAY;
            shape.move(-speed, 0);
        }
    }
}

void Pacman::draw(sf::RenderWindow& window) {
	window.draw(shape);
}

bool Pacman::checkWallIntersects(Map& _map, PacmanDirection _direction) {
    if (_direction == UP) {
        shape.move(0, -speed);
    } else if (_direction == DOWN) {
        shape.move(0, speed);
    } else if (_direction == LEFT) {
        shape.move(-speed, 0);
    } else if (_direction == RIGHT) {
        shape.move(speed, 0);
    }
    for (size_t i = 0; i < size_map_y; i++) {
        for (size_t j = 0;  j < size_map_x;  j++) {
            if (shape.getGlobalBounds().intersects(_map.getPointer()[i][j].getShape().getGlobalBounds())) {
                if(_map.getPointer()[i][j].getCategory() == WALL) return true;
            }
        }
    }
    return false;
}
