#pragma once
#ifndef _MAP_BUILDER_H_
#define _MAP_BUILDER_H_

class Map;
class Builder;

class MapBuilder : public Builder {
private:
	Map* map;
public:
	MapBuilder();
	~MapBuilder();
	void setProduct() override;
	void reset();
	Map* getProduct();
};

#endif