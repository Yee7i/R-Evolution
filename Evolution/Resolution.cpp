#include "Includes.h"

const int
ciScreenResolutionX = sf::VideoMode::getDesktopMode().width,
ciScreenResolutionY = sf::VideoMode::getDesktopMode().height;

int
iGameResolutionX = 800,
iGameResolutionY = 450;

int
iChangedResolutionX = 800,
iChangedResolutionY = 450;

double
dAspectRatio = (double)ciScreenResolutionX / (double)ciScreenResolutionY,
dResolutionScale = (double)ciScreenResolutionY / (double)iGameResolutionY;

void adjustViews()
{
	defaultView = sf::View(sf::Vector2f((float)iGameResolutionX / 2.0f, (float)iGameResolutionY / 2.0f), sf::Vector2f((float)iGameResolutionX, (float)iGameResolutionY));
	defaultView = setLetterbox(defaultView, window.getSize().x, window.getSize().y);
	window.setView(defaultView);
}

void recalculateVideoParameters()
{
	dAspectRatio = (double)ciScreenResolutionX / (double)ciScreenResolutionY;
	dResolutionScale = (double)ciScreenResolutionY / (double)iGameResolutionY;

//	std::cout << dAspectRatio << " " << dResolutionScale << std::endl;
}

sf::View setLetterbox(sf::View view, unsigned int resizedResolutionX, unsigned int resizedResolutionY)
{
	double
		windowAspectRatio = (double)resizedResolutionX / (double)resizedResolutionY,
		viewAspectRatio = (double)view.getSize().x / (double)view.getSize().y,
		posX = 0.0f,
		posY = 0.0f,
		sizeX = 1.0f,
		sizeY = 1.0f;

	if (windowAspectRatio > viewAspectRatio) // horizontal
	{
		sizeX = viewAspectRatio / windowAspectRatio;
		posX = (1 - sizeX) / 2.0f;
	}

	if (windowAspectRatio < viewAspectRatio) // vertical
	{
		sizeY = windowAspectRatio / viewAspectRatio;
		posY = (1 - sizeY) / 2.0f;
	}

	view.setViewport(sf::FloatRect(posX, posY, sizeX, sizeY));

	return view;
}