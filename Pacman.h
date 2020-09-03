#pragma once
#ifndef _PACMAN_H_
#define _PACMAN_H_

#include <SFML/Graphics.hpp>

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
	int speed;
public:
	Pacman();
	void keyboard();
	sf::CircleShape getSprite();
	void draw(sf::RenderWindow&);
};

#endif

