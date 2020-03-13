#include "Includes.h"

/*
void drawTest()
{
	sf::RectangleShape test1(sf::Vector2f(200, 200));
	test1.setFillColor(sf::Color::Red);
	test1.setPosition(0, 0);

	window.draw(test1);

	sf::CircleShape test2;
	test2.setRadius(100);
	test2.setFillColor(sf::Color::White);
	test2.setPosition(0, 250);
	test2.setPointCount(50);

	sf::RectangleShape outline(sf::Vector2f(800, 450));
	outline.setOutlineColor(sf::Color::Magenta);
	outline.setOutlineThickness(2);
	outline.setPosition(0, 0);
	outline.setFillColor(sf::Color::Transparent);

	window.draw(test2);
	window.draw(outline);
}
*/

void drawMMSprites()
{
	retexMMSprites();

	window.draw(mmSprBackground.sprite);
	window.draw(mmSprBubble15.sprite);
	window.draw(mmSprBubble15dop.sprite);
	window.draw(mmSprBubble35.sprite);
	window.draw(mmSprBubble35dop.sprite);
	window.draw(mmSprBubble60.sprite);
	window.draw(mmSprBubble60dop.sprite);
	window.draw(mmSprStart.sprite);
	window.draw(mmSprContinue.sprite);
	window.draw(mmSprSettings.sprite);
	window.draw(mmSprCredits.sprite);
	window.draw(mmSprExit.sprite);
}