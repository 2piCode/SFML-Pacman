#include <SFML/Graphics.hpp>
#include "Pacman.h"
#include "Map.h"
#include "Monster.h"
#include "GameClass.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 700), "PACMAN GAME");
	sf::Clock clock;

	GameClass game;


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		if (!game.gameplayed(clock)) break;

		window.clear(sf::Color::Black);

		game.draw(window);	

		window.display();
	}

	return 0;
}