#pragma once
#ifndef _GAMECLASS_H_
#define _GAMECLASS_H_

#include "Map.h"
#include "Monster.h"
#include "Pacman.h"

class Map;

class Monster;

class Pacman;

enum GameState {
	PLAYING,
	GAMELOSE,
	GAMEWIN
};

class GameClass {
	Map map;
	Blue blue;
	Red red;
	Pink pink;
	Pacman pacman;
	GameState state;
public:
	GameClass();
	void draw(sf::RenderWindow&);
	bool gameplayed(sf::Clock&);
};

#endif