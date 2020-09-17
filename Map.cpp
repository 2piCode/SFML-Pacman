#include "stdafx.h"

Cell::Cell() {
	shape.setSize(sf::Vector2f(BLOCK_SIZE, BLOCK_SIZE));
}

sf::RectangleShape Cell::getShape() const {
	return shape;
}

void Cell::setCell(int x, int y) {
	if (category == WALL) {
		shape.setFillColor(sf::Color(52, 93, 199));
	}
	if (category == COIN) {
		shape.setFillColor(sf::Color(255, 255, 255));
		shape.setSize(sf::Vector2f(3.f, 3.f));
		shape.setPosition(x * (BLOCK_SIZE + 1.25), y * (BLOCK_SIZE + 1.f));
		return;
	}
	if (category == EMPTY) {
		shape.setFillColor(sf::Color::Black);
	}
	shape.setPosition(x * BLOCK_SIZE, y *BLOCK_SIZE);
}

void Cell::setCategory(CellCategory _category) {
	category = _category;
}

CellCategory Cell::getCategory() const {
	return category;
}

Map::Map() {
	cells = new Cell * [size_map_y];
	for (size_t i = 0; i < size_map_y; i++) {
		cells[i] = new Cell[size_map_x];
	}
}

Map::~Map() {
	for (size_t i = 0; i < size_map_y; i++) {
		delete[] cells[i];
	}
	delete[] cells;
}

void Map::setMap() {
	char map[size_map_y][size_map_x]{
		" |---------------------| ",
		" |''''''''''|''''''''''| ",
		" |'--'-----'|'-----'--'| ",
		" |'''''''''''''''''''''| ",
		" |'--'|'----|----'|'--'| ",
		" |''''|'''''|'''''|''''| ",
		" ---|'|----'|'----|'|--- ",
		"    |'|     @     |'|    ",
		"----|'| | |---| | |'|----",
		"-'''''  | |BRP| |  '''''-",
		"----|'| | |---| | |'|----",
		"    |'|           |'|    ",
		" ---|'| --------- |'|--- ",
		" |''''''''''|''''''''''| ",
		" |'--'-----'|'-----'--'| ",
		" |''-'''''''''''''''-''| ",
		" |-'-'|'----|----'|'-''| ",
		" |''''|'''''|'''''|''''| ",
		" |'---|--|'-|-'|--|---'| ",
		" |'-'''''|'''''|'''''-'| ",
		" |'-'---'|-'|'-|'---'-'| ",
		" |'-'-''''''|''''''-'-'| ",
		" |'-'-'----'|'----'-'-'| ",
		" |''''''''''|'''''''''C| ",
		" |---------------------| "
	};

	for (size_t i = 0; i < size_map_y; i++) {
		for (size_t j = 0; j < size_map_x; j++) {
			CellCategory _category;
			if (map[i][j] == '|' or map[i][j] == '-') {
				_category = WALL;
			}
			if (map[i][j] == '\'') {
				_category = COIN;
			}
			if (map[i][j] == ' ' or map[i][j] == 'B' or map[i][j] == 'P' or map[i][j] == 'R') {
				_category = EMPTY;
			}
			cells[i][j].setCategory(_category);
			cells[i][j].setCell(j, i);
		}
	}
}

void Map::draw(sf::RenderWindow& window) {
	for (size_t i = 0; i < size_map_y; i++) {
		for (size_t j = 0; j < size_map_x; j++) {
			window.draw(cells[i][j].getShape());
		}
	}
}

bool Map::winCoin() {
	for (size_t i = 0; i < size_map_y; i++) {
		for (size_t j = 0; j < size_map_x; j++) {
			if (cells[i][j].getCategory() == COIN) return false;
		}
	}
	return true;
}

Cell** Map::getPointer() const {
	return cells;
}

sf::Vector2f Map::getStartPosition(char person) const{
	char map[size_map_y][size_map_x]{
		" |---------------------| ",
		" |''''''''''|''''''''''| ",
		" |'--'-----'|'-----'--'| ",
		" |'''''''''''''''''''''| ",
		" |'--'|'----|----'|'--'| ",
		" |''''|'''''|'''''|''''| ",
		" ---|'|----'|'----|'|--- ",
		"    |'|     @     |'|    ",
		"----|'| | |---| | |'|----",
		"-'''''  | |BRP| |  '''''-",
		"----|'| | |---| | |'|----",
		"    |'|           |'|    ",
		" ---|'| --------- |'|--- ",
		" |''''''''''|''''''''''| ",
		" |'--'-----'|'-----'--'| ",
		" |''-'''''''''''''''-''| ",
		" |-'-'|'----|----'|'-''| ",
		" |''''|'''''|'''''|''''| ",
		" |'---|--|'-|-'|--|---'| ",
		" |'-'''''|'''''|'''''-'| ",
		" |'-'---'|-'|'-|'---'-'| ",
		" |'-'-''''''|''''''-'-'| ",
		" |'-'-'----'|'----'-'-'| ",
		" |''''''''''|'''''''''C| ",
		" |---------------------| "
	};
	for (size_t i = 0; i < size_map_y; i++) {
		for (size_t j = 0; j < size_map_x; j++) {
			if (map[i][j] == person) return { j * BLOCK_SIZE, i * BLOCK_SIZE };
		}
	}
}
