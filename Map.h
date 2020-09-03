#pragma once
#ifndef _MAP_H_
#define _MAP_H_

#include <SFML/Graphics.hpp>

enum CellCategory {
	COIN,
	EMPTY,
	WALL
};

class Cell {
	CellCategory category;
	sf::RectangleShape shape;
public:
	Cell();
	sf::RectangleShape getShape();
	void setCell(CellCategory, int, int);
};

class Map {
	Cell** cells;
public:
	Map();
	~Map();
	void setMap();
	void draw(sf::RenderWindow&);
};

#endif
