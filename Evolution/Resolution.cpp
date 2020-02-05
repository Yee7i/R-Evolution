#include "Includes.h"

const int
ciScreenResolutionX = sf::VideoMode::getDesktopMode().width,
ciScreenResolutionY = sf::VideoMode::getDesktopMode().height;

int
iGameResolutionX = 600,
iGameResolutionY = 400;

double
dAspectRatio = (double)ciScreenResolutionX / (double)ciScreenResolutionY,
dResolutionScale = (double)ciScreenResolutionY / (double)iGameResolutionY;

void recalculateVideoParameters()
{
	dAspectRatio = (double)ciScreenResolutionX / (double)ciScreenResolutionY;
	dResolutionScale = (double)ciScreenResolutionY / (double)iGameResolutionY;
}