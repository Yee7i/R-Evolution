#include "Includes.h"

#pragma once

extern std::filesystem::path workingDirectory;

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
mmState,
iGameResolutionX,
iGameResolutionY,
iChangedResolutionX,
iChangedResolutionY;

extern sf::View 
defaultView;

extern sf::RectangleShape 
newGameButton,
continueButton,
settingsButton,
exitButton,
darkenBackground;

extern sf::RenderTexture
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

extern sf::Sprite
mmSprBackground,
mmSprStart,
mmSprContinue,
mmSprSettings,
mmSprCredits,
mmSprExit,
mmSprBubble15,
mmSprBubble35,
mmSprBubble60;
