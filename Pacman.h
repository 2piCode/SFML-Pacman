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
	void setStartPosition(sf::Vector2f);
	sf::FloatRect getGlobalBounds() const;
};

#endif

