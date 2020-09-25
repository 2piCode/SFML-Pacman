#include "stdafx.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "PACMAN GAME");
	sf::Clock clock;

	GameComponentBuilder gameBuilder;
	gameBuilder.setProduct();

	GameClass game(gameBuilder.getProduct());

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