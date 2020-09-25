#include "stdafx.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "PACMAN GAME");
	sf::Clock clock;

	Unit* units = new Unit;
	units->add(new Pink);
	units->add(new Red);
	units->add(new Blue);

	GameComponent* components = new GameComponent;

	components->add(units);
	components->add(new Map);

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

	delete units;
	delete components;

	return 0;
}