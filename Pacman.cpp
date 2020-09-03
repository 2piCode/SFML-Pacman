#include "Pacman.h"

Pacman::Pacman() {
	direction = STAY;
	shape.setFillColor(sf::Color(255, 216, 0));
	shape.setRadius(8.f);
	shape.setPosition(0, 0);
    speed = 1;
}

void Pacman::keyboard()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        direction = UP;
        shape.move(0, -speed);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        direction = DOWN;
        shape.move(0, speed);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
       direction = LEFT;
       shape.move(-speed, 0);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        direction = RIGHT;
        shape.move(speed, 0);
    }
}

void Pacman::draw(sf::RenderWindow& window) {
	window.draw(shape);
}
