#include "Includes.h"

void initializeGame()
{
	window.create(sf::VideoMode::getDesktopMode(), "Evolution", sf::Style::Default);
	window.setSize(sf::Vector2u(600, 400));
	window.setFramerateLimit(60);
}

void processGame()
{
	while (window.isOpen())
	{
		window.clear(sf::Color::Blue);

		calculateFrameTime();

		window.display();
	}
}