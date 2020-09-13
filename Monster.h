#pragma once
#ifndef _MONSTER_H_
#define _MONSTER_H_

#include <SFML/Graphics.hpp>

class Monster {
	sf::Texture texture;
	sf::Sprite shape;
public:
	Monster();
	void draw(sf::RenderWindow&);
};

#endif