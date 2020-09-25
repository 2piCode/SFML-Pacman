#include "stdafx.h"

void GameComponent::add(GameComponent* component){
	components.push_back(component);
}

void GameComponent::draw(sf::RenderWindow&) const {}
