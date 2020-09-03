#include <SFML/Graphics.hpp>


int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML Works!");

	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		sf::Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == sf::Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		window.clear(sf::Color(250, 220, 100, 0));

		sf::CircleShape circle(50.f);

		circle.setFillColor(sf::Color::Red);
		circle.setOutlineThickness(5.f);
		circle.setOutlineColor(sf::Color(80, 220, 50, 150));
		circle.move(150, 150);

		window.draw(circle);
		// ��������� ����	
		window.display();
	}

	return 0;
}