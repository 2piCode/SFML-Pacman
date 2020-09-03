#include <SFML/Graphics.hpp>
#include "Pacman.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(680, 420), "SFML Works!");

	Pacman pacman;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		pacman.keyboard();

		window.clear(sf::Color::Black);

		pacman.draw(window);
		window.display();
	}

	return 0;
}