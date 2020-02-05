#include "Includes.h"

sf::RectangleShape newGameButton(sf::Vector2f(100, 50));
sf::RectangleShape continueButton(sf::Vector2f(100, 50));
sf::RectangleShape optionsButton(sf::Vector2f(100, 50));
sf::RectangleShape exitButton(sf::Vector2f(100, 50));

sf::RectangleShape darkenBackground(sf::Vector2f(800, 450));

void initializeMainMenu()
{
	newGameButton.setFillColor(sf::Color::Transparent);
	continueButton.setFillColor(sf::Color::Transparent);
	optionsButton.setFillColor(sf::Color::Transparent);
	exitButton.setFillColor(sf::Color::Transparent);

	newGameButton.setOutlineColor(sf::Color::Red);
	continueButton.setOutlineColor(sf::Color::Blue);
	optionsButton.setOutlineColor(sf::Color::Green);
	exitButton.setOutlineColor(sf::Color::Yellow);

	newGameButton.setOutlineThickness(2);
	continueButton.setOutlineThickness(2);
	optionsButton.setOutlineThickness(2);
	exitButton.setOutlineThickness(2);

	newGameButton.setPosition(50, 50);
	continueButton.setPosition(50, 120);
	optionsButton.setPosition(50, 190);
	exitButton.setPosition(50, 260);

	darkenBackground.setFillColor(sf::Color(0, 0, 0, 120));
	darkenBackground.setPosition(0, 0);

	gameState = 10;
}

void handleMainMenu()
{
	switch (displayMainMenu())
	{
		case 0:
		{
			if (gameState < 10)
			{
				gameState = 10;
			}
		}

		case 1:
		{
			gameState = 11;
		}

		case 2:
		{
			gameState = 12;
		}

		case 3:
		{
			gameState = 13;
		}

		case 4:
		{
			gameState = 14;
			window.close();
		}
	}
}

int displayMainMenu()
{
	sf::Event clicked;

	while (window.pollEvent(clicked))
	{
		if (clicked.type = sf::Event::MouseButtonPressed)
		{
			if (mouseInRectangle(newGameButton, sf::Mouse::getPosition()))
			{
				std::cout << "1" << std::endl;
				return 1;
			}

			if (mouseInRectangle(continueButton, sf::Mouse::getPosition()))
			{
				std::cout << "2" << std::endl;
				return 2;
			}

			if (mouseInRectangle(optionsButton, sf::Mouse::getPosition()))
			{
				std::cout << "3" << std::endl;
				return 3;
			}

			if (mouseInRectangle(exitButton, sf::Mouse::getPosition()))
			{
				std::cout << "4" << std::endl;
				return 4;
			}
		}
	}

	return 0;
}