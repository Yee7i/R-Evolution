#include "Includes.h"

void initializeMainMenu()
{
	newGameButton.setSize(sf::Vector2f(100, 50));
	continueButton.setSize(sf::Vector2f(100, 50));
	settingsButton.setSize(sf::Vector2f(100, 50));
	exitButton.setSize(sf::Vector2f(100, 50));

	newGameButton.setFillColor(sf::Color::Transparent);
	continueButton.setFillColor(sf::Color::Transparent);
	settingsButton.setFillColor(sf::Color::Transparent);
	exitButton.setFillColor(sf::Color::Transparent);

	newGameButton.setPosition(50, 50);
	continueButton.setPosition(50, 120);
	settingsButton.setPosition(50, 190);
	exitButton.setPosition(50, 260);

	darkenBackground.setSize(sf::Vector2f(800, 450));
	darkenBackground.setFillColor(sf::Color(0, 0, 0, 120));
	darkenBackground.setPosition(0, 0);



	gameState = 10;
}

void handleMainMenu()
{
	drawMainMenu();

	switch (mmState)
	{
		case 0:
		{
			if (gameState < 10)
			{
				gameState = 10;
			}

			break;
		}

		case 1:
		{
			gameState = 11;

			break;
		}

		case 2:
		{
			gameState = 12;

			break;
		}

		case 3:
		{
			gameState = 13;

			break;
		}

		case 4:
		{
			gameState = 14;

			break;
		}
	}
}

void handleSettings()
{
	drawMainMenu();
	window.draw(darkenBackground);

	sf::RectangleShape test(sf::Vector2f(100, 100));
	test.setPosition(100, 100);
	test.setOutlineColor(sf::Color::Red);
	test.setOutlineThickness(3);
	test.setFillColor(sf::Color::Transparent);

	window.draw(test);
}