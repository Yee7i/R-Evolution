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
				iGameResolutionX = window.getSize().x;
				iGameResolutionY = window.getSize().y;

				recalculateVideoParameters();

				break;
			}
		}
	}
}