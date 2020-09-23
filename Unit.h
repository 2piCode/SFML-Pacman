#pragma once
#ifndef _UNIT_H_
#define _UNIT_H_

enum Direction;

class Unit {
protected:
	Direction direction;
	float speed;
};

#endif