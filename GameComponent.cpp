#include "stdafx.h"

void GameComponent::add(GameComponent* component){
	components.push_back(component);
}

void GameComponent::draw(sf::RenderWindow&) const {}

int GameComponent::getSize() const {
	return components.size();
}

GameComponent* GameComponent::operator[](int k) {
	return components[k];
}
