#pragma once
#ifndef _GAME_COMPONENT_H_
#define _GAME_COMPONENT_H_

class Map;

class GameComponent {
	std::vector<GameComponent> components;
public:
	virtual void draw(sf::RenderWindow&) const = 0;
};

#endif