#pragma once
#ifndef _MONSTER_H_
#define _MONSTER_H_

#include <SFML/Graphics.hpp>
#include <time.h>
#include "Map.h"
#include "Direction.h"

enum Direction;

class Map;

class Monster {
	Direction direction;
	sf::Texture texture;
	sf::Sprite shape;
	float speed;
public:
	Monster();
	void move(Map&);
	void draw(sf::RenderWindow&);
	bool checkWallIntersects(Map&);
	void release(sf::Clock&);
};

#endif