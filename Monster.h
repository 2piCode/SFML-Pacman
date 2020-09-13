#pragma once
#ifndef _MONSTER_H_
#define _MONSTER_H_

#include <SFML/Graphics.hpp>
#include "Direction.h"

enum Direction;

class Monster {
	Direction direction;
	sf::Texture texture;
	sf::Sprite shape;
public:
	Monster();
	void move();
	void draw(sf::RenderWindow&);
};

#endif