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
		}
	}
}