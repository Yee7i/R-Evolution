#include "Includes.h"

#pragma once

extern double
dFrameTime,
dAspectRatio,
dResolutionScale;

extern sf::RenderWindow 
window;

extern thor::Timer 
tFrameTime;

extern const int
ciScreenResolutionX,
ciScreenResolutionY;

extern int
gameState,
iGameResolutionX,
iGameResolutionY,
iChangedResolutionX,
iChangedResolutionY;

extern sf::View 
defaultView;
