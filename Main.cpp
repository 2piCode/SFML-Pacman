#include <SFML/Graphics.hpp>
#include "Pacman.h"
#include "Map.h"
#include "Monster.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 700), "SFML Works!");

	Pacman pacman;
	Map map;
	Monster monster;

	map.setMap();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		pacman.keyboard();
		pacman.move(map);

		monster.move(map);

		window.clear(sf::Color::Black);

		map.draw(window);
		pacman.draw(window);
		monster.draw(window);

		window.display();
	}

	return 0;
}