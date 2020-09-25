#pragma once
#ifndef _UNIT_H_
#define _UNIT_H_

enum Direction;

class Map;

class GameComponent;

class Unit : public GameComponent{
	std::vector<GameComponent*> units;
protected:
	Direction direction;
	float speed;
public:
	virtual void add(GameComponent*);
	virtual void move(Map&);
};

#endif