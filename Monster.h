#pragma once
#ifndef _MONSTER_H_
#define _MONSTER_H_

class Map;
class Unit;

class Monster : public Unit {
protected:
	sf::Texture texture;
	sf::RectangleShape shape;
public:
	Monster();
	void move(Map&) override;
	void draw(sf::RenderWindow&) const override;
	bool checkWallIntersects(Map&);
	bool checkPacmanIntersects(Pacman&);
	void setStartPosition(sf::Vector2f);
	virtual void release(sf::Clock&, sf::Vector2f) = 0;
};	

class Pink : public Monster {
public:
	Pink();
	void release(sf::Clock&, sf::Vector2f) override;
};

class Red : public Monster {
public:
	Red();
	void release(sf::Clock&, sf::Vector2f) override;
};

class Blue : public Monster {
public:
	Blue();
	void release(sf::Clock&, sf::Vector2f) override;
};

#endif