#include "Includes.h"

#pragma once

// Coordination.cpp

void initializeGame();
void processGame();

// Events.cpp

void handleEvents();

// Time.cpp

void calculateFrameTime();

// Resolution.cpp

void adjustViews();
void recalculateVideoParameters();
sf::View setLetterbox(sf::View view, unsigned int resizedResolutionX, unsigned int resizedResolutionY);

// Drawing.cpp

void drawTest();

// Hitboxes.cpp

bool mouseInRectangle(sf::RectangleShape rectangle, sf::Vector2i mouse);

// MainMenu.cpp

void initializeMainMenu();
void handleMainMenu();
int displayMainMenu();