#include "stdafx.h"

GameClass::GameClass(GameComponent* _components) {
	state = PLAYING;
	this->components = _components;
}

void GameClass::draw(sf::RenderWindow& _window) {
	/*map.draw(_window);
	pacman.draw(_window);
	blue.draw(_window);
	red.draw(_window);
	pink.draw(_window);*/
	for (size_t i = 0; i < components->getSize(); i++) {
		components->draw(_window);
	}
}

bool GameClass::gameplayed(sf::Clock& _clock) {
	/*pacman.keyboard();
	pacman.move(map);
	blue.release(_clock, map.getStartPosition('@'));
	blue.move(map);
	red.release(_clock, map.getStartPosition('@'));
	red.move(map);
	pink.release(_clock, map.getStartPosition('@'));
	pink.move(map);
	if (map.winCoin()) return false;
	if (loseByMonster()) return false;*/
	return true;
}
bool GameClass::loseByMonster()  {
	//if (blue.checkPacmanIntersects(pacman) or red.checkPacmanIntersects(pacman) or pink.checkPacmanIntersects(pacman)) return true;
	return false;
}