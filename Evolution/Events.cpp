#include "Includes.h"

void handleEvents()
{
	sf::Event ev;

	while (window.pollEvent(ev))
	{
		switch (ev.type)
		{
			case sf::Event::Resized:
			{
				iChangedResolutionX = window.getSize().x;
				iChangedResolutionY = window.getSize().y;

				if (iChangedResolutionX < 800)
				{
					iChangedResolutionX = 800;
				}

				if (iChangedResolutionY < 450)
				{
					iChangedResolutionY = 450;
				}

				iGameResolutionX = iChangedResolutionX;
				iGameResolutionY = iChangedResolutionY;

				window.setSize(sf::Vector2u(iChangedResolutionX, iChangedResolutionY));

				recalculateVideoParameters();
				defaultView = setLetterbox(defaultView, iChangedResolutionX, iChangedResolutionY);
				window.setView(defaultView);

				break;
			}

			case sf::Event::Closed:
			{
				window.close();
			}

			case sf::Event::KeyPressed:
			{
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				{
					window.close();
				}

				break;
			}

			case sf::Event::MouseButtonPressed:
			{
				if (gameState == 10)
				{
					if (mouseInRectangle(newGameButton, sf::Mouse::getPosition(window)))
					{
						std::cout << "1" << std::endl;
						mmState = 1;
					}

					if (mouseInRectangle(continueButton, sf::Mouse::getPosition(window)))
					{
						std::cout << "2" << std::endl;
						mmState = 2;
					}

					if (mouseInRectangle(settingsButton, sf::Mouse::getPosition(window)))
					{
						std::cout << "3" << std::endl;
						mmState = 3;
					}

					if (mouseInRectangle(exitButton, sf::Mouse::getPosition(window)))
					{
						std::cout << "4" << std::endl;
						mmState = 4;
					}
				}

				break;
			}
		}
	}
}