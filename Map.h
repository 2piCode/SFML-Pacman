#pragma once
#ifndef _MAP_H_
#define _MAP_H_

class GameComponent;

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
	CellCategory getCategory() const;
	sf::RectangleShape getShape() const;
};

class Map : public GameComponent {
	Cell** cells;
public:
	Map();
	~Map();
	void setMap();
	void draw(sf::RenderWindow&) const override;
	bool winCoin();
	Cell** getPointer() const;
	sf::Vector2f getStartPosition(char) const;
};

#endif