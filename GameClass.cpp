#include "GameClass.h"

GameClass::GameClass() {
	state = PLAYING;
	map.setMap();
}

void GameClass::draw(sf::RenderWindow& _window) {
	map.draw(_window);
	pacman.draw(_window);
	blue.draw(_window);
	red.draw(_window);
	pink.draw(_window);
}

bool GameClass::gameplayed(sf::Clock& _clock) {
	pacman.keyboard();
	pacman.move(map);
	blue.release(_clock);
	blue.move(map);
	red.release(_clock);
	red.move(map);
	pink.release(_clock);
	pink.move(map);
	if (map.winCoin()) return false;
	return true;
}	