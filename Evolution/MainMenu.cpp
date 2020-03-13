#include "Includes.h"

void initializeMainMenu()
{
	loadMMTextures();
	loadMMSprites();
	initializeMMHitboxes();
	positionMMSprites();
	addMMAnimations();

	darkenBackground.setSize(sf::Vector2f(800, 450));
	darkenBackground.setFillColor(sf::Color(0, 0, 0, 120));
	darkenBackground.setPosition(0, 0);

	gameState = 10;
}

void handleMainMenu()
{
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

		case 5:
		{
			gameState = 15;

			break;
		}
	}

	updateMMBubbles();
	animateMMSprites();
	drawMMSprites();
}

void handleSettings()
{
	window.draw(darkenBackground);

	sf::RectangleShape test(sf::Vector2f(100, 100));
	test.setPosition(100, 100);
	test.setOutlineColor(sf::Color::Red);
	test.setOutlineThickness(3);
	test.setFillColor(sf::Color::Transparent);

	window.draw(test);
}