#pragma once
#ifndef _GAME_COMPONENT_H_
#define _GAME_COMPONENT_H_

class GameComponent {
	std::vector<GameComponent*> components;
public:
	virtual void add(GameComponent*);
	virtual void draw(sf::RenderWindow&) const;
	int getSize() const;
	GameComponent* operator[](int k);
};

#endif