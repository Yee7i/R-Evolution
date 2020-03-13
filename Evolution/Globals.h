#include "Includes.h"

#pragma once

extern std::filesystem::path workingDirectory;

extern double
dFrameTime,
dAspectRatio,
dResolutionScale,
dGameScale;

extern sf::RenderWindow 
window;

extern sf::Vector2f
v2fLetterboxSize;

extern sf::Vector2i
mousePosition;

extern thor::Timer 
tFrameTime;

extern const int
ciScreenResolutionX,
ciScreenResolutionY;

extern int
gameState,
mmState,
iGameResolutionX,
iGameResolutionY,
iChangedResolutionX,
iChangedResolutionY;

extern sf::View 
defaultView;

extern sf::RectangleShape 
darkenBackground;

extern at::AlternatingSprite
mmSprBackground,
mmSprStart,
mmSprContinue,
mmSprSettings,
mmSprCredits,
mmSprExit,
mmSprBubble15,
mmSprBubble15dop,
mmSprBubble35,
mmSprBubble35dop,
mmSprBubble60,
mmSprBubble60dop;
