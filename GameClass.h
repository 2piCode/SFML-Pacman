#pragma once
#ifndef _GAMECLASS_H_
#define _GAMECLASS_H_

class Map;

class Monster;

class Pacman;

enum GameState {
	PLAYING,
	GAMELOSE,
	GAMEWIN
};

class GameClass {
	GameState state;
	GameComponent* components;
public:
	GameClass(GameComponent*);
	void draw(sf::RenderWindow&);
	bool gameplayed(sf::Clock&);
	bool loseByMonster();
};

#endif