#pragma once
#ifndef _PACMAN_H_
#define _PACMAN_H_

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Map.h"
#include "Direction.h"

class Map;

enum Direction;

class Pacman {
	Direction direction;
	sf::CircleShape shape;
	float speed;
public:
	Pacman();

	void keyboard();
	void draw(sf::RenderWindow&);
	void move(Map&);

	bool checkWallIntersects(Map&, Direction);
	void checkCoinIntersects(Map&);
};

#endif

