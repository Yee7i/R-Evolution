#include "Includes.h"

// General

double 
dFrameTime,
dGameScale = 1.0;

int
gameState = 0,
mmState = 0,
iChangedResolutionX,
iChangedResolutionY;

std::filesystem::path workingDirectory;

sf::RenderWindow window;

sf::Vector2f
v2fLetterboxSize;

sf::Vector2i
mousePosition;

thor::Timer tFrameTime;

sf::View defaultView;

// MainMenu.cpp

sf::RectangleShape
darkenBackground;

at::AlternatingSprite
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