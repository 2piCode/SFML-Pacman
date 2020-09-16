#include "GameClass.h"

GameClass::GameClass() {
	state = PLAYING;
	map.setMap();
}

void GameClass::draw(sf::RenderWindow& _window) {
	map.draw(_window);
	pacman.draw(_window);
	monster.draw(_window);
}

bool GameClass::gameplayed(sf::Clock& _clock) {
	pacman.keyboard();
	pacman.move(map);
	monster.release(_clock);
	monster.move(map);
	if (map.winCoin()) return false;
	return true;
}