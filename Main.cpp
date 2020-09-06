#include <SFML/Graphics.hpp>
#include "Pacman.h"
#include "Map.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(680, 420), "SFML Works!");

	Pacman pacman;
	Map map;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		map.setMap();
		pacman.keyboard(map);

		window.clear(sf::Color::Black);

		map.draw(window);
		pacman.draw(window);
		
		window.display();
	}

	return 0;
}