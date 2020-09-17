#pragma once
#ifndef _PACMAN_H_
#define _PACMAN_H_

class Map;

enum Direction;

class Pacman {
	Direction direction;
	sf::CircleShape shape;
	float speed;
public:
	Pacman();

	void keyboard();
	void draw(sf::RenderWindow&) const;
	void move(Map&);

	bool checkWallIntersects(Map&) const;
	void coinIntersects(Map&);

	sf::FloatRect getGlobalBounds() const;
};

#endif

