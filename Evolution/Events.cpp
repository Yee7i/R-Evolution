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

				if (gameState < 15)
				{
					calculateMMMousePosition();
				}

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

			case sf::Event::MouseMoved:
			{

				if(gameState < 15)
			//	calculateMousePosition();

				if (gameState == 10)
				{
					if (mouseInRectangle(mmSprStart.hitbox, mousePosition))
					{
						mmSprStart.state = 1;
					}
					else
					{
						mmSprStart.state = 0;
					}

					if (mouseInRectangle(mmSprContinue.hitbox, mousePosition))
					{
						mmSprContinue.state = 1;
					}
					else
					{
						mmSprContinue.state = 0;
					}

					if (mouseInRectangle(mmSprSettings.hitbox, mousePosition))
					{
						mmSprSettings.state = 1;
					}
					else
					{
						mmSprSettings.state = 0;
					}

					if (mouseInRectangle(mmSprCredits.hitbox, mousePosition))
					{
						mmSprCredits.state = 1;
					}
					else
					{
						mmSprCredits.state = 0;
					}

					if (mouseInRectangle(mmSprExit.hitbox, mousePosition))
					{
						mmSprExit.state = 1;
					}
					else
					{
						mmSprExit.state = 0;
					}
				}

				break;
			}

			case sf::Event::MouseButtonPressed:
			{
				if (gameState == 10)
				{
					if (mouseInRectangle(mmSprStart.hitbox, mousePosition))
					{
						std::cout << "1" << std::endl;
						mmState = 1;
					}

					if (mouseInRectangle(mmSprContinue.hitbox, mousePosition))
					{
						std::cout << "2" << std::endl;
						mmState = 2;
					}

					if (mouseInRectangle(mmSprSettings.hitbox, mousePosition))
					{
						std::cout << "3" << std::endl;
						mmState = 3;
					}

					if (mouseInRectangle(mmSprCredits.hitbox, mousePosition))
					{
						std::cout << "4" << std::endl;
						mmState = 4;
					}

					if (mouseInRectangle(mmSprExit.hitbox, mousePosition))
					{
						std::cout << "5" << std::endl;
						mmState = 5;
					}
				}

				break;
			}
		}
	}
}