#include "Includes.h"

void initializeGame()
{
	window.create(sf::VideoMode::getDesktopMode(), "Evolution", sf::Style::Default);
	window.setSize(sf::Vector2u(iGameResolutionX, iGameResolutionY));
	window.setFramerateLimit(60);

	workingDirectory = getProgramPath();
	std::cout << "Current working directory - " << workingDirectory << std::endl;

	adjustViews();

	gameState = 1;
}

void processGame()
{
	while (window.isOpen())
	{
		window.clear(sf::Color::Black);

		calculateFrameTime();

		if (gameState < 15)
		{
			calculateMMMousePosition();
		}

		handleEvents();

	//	drawTest();

		handleGameStates();

		window.display();
	}
}