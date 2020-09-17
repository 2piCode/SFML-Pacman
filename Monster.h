#pragma once
#ifndef _MONSTER_H_
#define _MONSTER_H_

enum Direction;

class Map;

class Monster {
protected:
	Direction direction;
	sf::Texture texture;
	sf::RectangleShape shape;
	float speed;
public:
	Monster();
	void move(Map&);
	void draw(sf::RenderWindow&);
	bool checkWallIntersects(Map&);
	bool checkPacmanIntersects(Pacman&);
	virtual void release(sf::Clock&) = 0;
};	

class Pink : public Monster {
public:
	Pink();

	virtual void release(sf::Clock&);
};

class Red : public Monster {
public:
	Red();
	virtual void release(sf::Clock&);
};

class Blue : public Monster {
public:
	Blue();
	virtual void release(sf::Clock&);
};

#endif