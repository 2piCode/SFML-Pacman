#pragma once
#ifndef _UNIT_H_
#define _UNIT_H_

enum Direction;

class Map;

class Unit : public GameComponent{
protected:
	Direction direction;
	float speed;
public:
	virtual void move(Map&) = 0;
};

#endif