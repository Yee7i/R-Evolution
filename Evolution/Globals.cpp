#include "Includes.h"

// General

double dFrameTime;

std::filesystem::path workingDirectory;

sf::RenderWindow window;

thor::Timer tFrameTime;

sf::View defaultView;

int 
gameState = 0,
mmState = 0;

// MainMenu.cpp

sf::RectangleShape
newGameButton,
continueButton,
settingsButton,
exitButton,
darkenBackground;

sf::RenderTexture
mmTexBackground,
mmTexStart,
mmTexStartBig,
mmTexContinue,
mmTexContinueBig,
mmTexSettings,
mmTexSettingsBig,
mmTexExit,
mmTexExitBig,
mmTexBubble15,
mmTexBubble35,
mmTexBubble60;

sf::Sprite
mmSprBackground,
mmSprStart,
mmSprContinue,
mmSprSettings,
mmSprCredits,
mmSprExit,
mmSprBubble15,
mmSprBubble35,
mmSprBubble60;