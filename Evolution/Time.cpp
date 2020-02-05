#include "Includes.h"

void calculateFrameTime()
{
	dFrameTime = (double)1.0f - (double)tFrameTime.getRemainingTime().asSeconds();
	tFrameTime.restart(sf::seconds(1.0f));

//	std::cout << dFrameTime << std::endl;
}