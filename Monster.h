#pragma once
#ifndef _MONSTER_H_
#define _MONSTER_H_

class Map;
class Unit;

class Monster : public Unit {
protected:
	sf::Texture texture;
	sf::RectangleShape shape;
public:
	Monster();
	void move(Map&);
	void draw(sf::RenderWindow&);
	bool checkWallIntersects(Map&);
	bool checkPacmanIntersects(Pacman&);
	void setStartPosition(sf::Vector2f);
	virtual void release(sf::Clock&, sf::Vector2f) = 0;
};	

class Pink : public Monster {
public:
	Pink();
	virtual void release(sf::Clock&, sf::Vector2f);
};

class Red : public Monster {
public:
	Red();
	virtual void release(sf::Clock&, sf::Vector2f);
};

class Blue : public Monster {
public:
	Blue();
	virtual void release(sf::Clock&, sf::Vector2f);
};

#endif