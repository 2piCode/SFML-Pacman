#pragma once
#ifndef _PACMAN_H_
#define _PACMAN_H_

#include <SFML/Graphics.hpp>
#include "Map.h"

class Map;

enum PacmanDirection {
	STAY,
	LEFT,
	RIGHT,
	UP,
	DOWN
};

class Pacman {
	PacmanDirection direction;
	sf::CircleShape shape;
	float speed;
public:
	Pacman();
	void keyboard();
	void draw(sf::RenderWindow&);
	void move(Map&);
	bool checkWallIntersects(Map&, PacmanDirection);
};

#endif

