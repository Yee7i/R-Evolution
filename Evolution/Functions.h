#include "Includes.h"

#pragma once

// Coordination.cpp

void initializeGame();
void processGame();

// GameStates.cpp

void handleGameStates();

// Events.cpp

void handleEvents();

// Time.cpp

void calculateFrameTime();

// Resolution.cpp

void adjustViews();
void recalculateVideoParameters();
sf::View setLetterbox(sf::View view, unsigned int resizedResolutionX, unsigned int resizedResolutionY);
sf::Vector2f getLetterboxSize(sf::View view, unsigned int resizedResolutionX, unsigned int resizedResolutionY);

// Drawing.cpp

void drawTest();
void drawMMSprites();

// Hitboxes.cpp

bool mouseInRectangle(sf::RectangleShape rectangle, sf::Vector2i mouse);
void initializeMMHitboxes();

// MainMenu.cpp

void initializeMainMenu();
void handleMainMenu();
//void drawMainMenu();
void handleSettings();

// Textures.cpp

void loadMMTextures();

// Sprites.cpp

void loadMMSprites();
void retexMMSprites();
void positionMMSprites();

// Animations.cpp

void addMMAnimations();
void animateMMSprites();
void updateMMBubbles();

// Utilities.cpp

std::filesystem::path getProgramPath();
void calculateMMMousePosition();