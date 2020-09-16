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

	void setCell(int, int);
	void setCategory(CellCategory);

	CellCategory getCategory();
	sf::RectangleShape getShape();
};

class Map {
	Cell** cells;
public:
	Map();
	~Map();

	void setMap();

	void draw(sf::RenderWindow&);

	bool winCoin();

	Cell** getPointer();
};

#endif