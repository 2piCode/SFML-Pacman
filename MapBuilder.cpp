#include "stdafx.h"

MapBuilder::MapBuilder() {
	this->reset();
}

MapBuilder::~MapBuilder() {
	if (map) delete map;
}

void MapBuilder::setProduct() {
	map->setMap();
}

void MapBuilder::reset() {
	this->map = new Map;
}

Map* MapBuilder::getProduct()
{
	Map* result = map;
	this->reset();
	return result;
}
