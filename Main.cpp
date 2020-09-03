#include <SFML/Graphics.hpp>


int main()
{
	// Объект, который, собственно, является главным окном приложения
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML Works!");

	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		sf::Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == sf::Event::Closed)
				// Тогда закрываем его
				window.close();
		}
		window.clear(sf::Color(250, 220, 100, 0));

		sf::CircleShape circle(50.f);

		circle.setFillColor(sf::Color::Red);
		circle.setOutlineThickness(5.f);
		circle.setOutlineColor(sf::Color(80, 220, 50, 150));
		circle.move(150, 150);

		window.draw(circle);
		// Отрисовка окна	
		window.display();
	}

	return 0;
}