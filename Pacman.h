#pragma once
#ifndef _PACMAN_H_
#define _PACMAN_H_

class Map;
class Unit;

class Pacman : public Unit {
	sf::CircleShape shape;
public:
	Pacman();
	void keyboard();
	void draw(sf::RenderWindow&) const override;
	void move(Map&) override;
	bool checkWallIntersects(Map&) const;
	void coinIntersects(Map&);
	void setStartPosition(sf::Vector2f);
	sf::FloatRect getGlobalBounds() const;
};

#endif

