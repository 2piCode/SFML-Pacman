#pragma once
#ifndef _UNIT_H_
#define _UNIT_H_

enum Direction;

class Map;

class Unit{
protected:
	Direction direction;
	float speed;
public:
	virtual void draw(sf::RenderWindow&) const = 0;
	virtual void move(Map&) = 0;
};

#endif