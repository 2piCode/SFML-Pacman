#pragma once
#ifndef _COMPONENT_H_
#define _COMPONENT_H_

class Map;

class Component {
protected:
	Component* parent;
public:
	void setParent(Component*);
	Component* getParent() const;
	virtual bool isComposite() const;
	virtual void draw(sf::RenderWindow&) = 0;
	virtual void move(Map&) = 0;
	virtual void release(sf::Clock&, sf::Vector2f) = 0;
};

#endif