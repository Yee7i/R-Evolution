#include "Includes.h"

bool mouseInRectangle(sf::RectangleShape rectangle, sf::Vector2i mouse)
{ 
	/* DIAGNOSTICS 

	std::cout << "Mouse - " << mouse.x << " " << mouse.y << std::endl;
	std::cout << "RPosi - " << rectangle.getPosition().x << " " << rectangle.getPosition().y << std::endl;
	std::cout << "RSize - " << rectangle.getSize().x << " " << rectangle.getSize().y;

	if (mouse.x <= rectangle.getPosition().x + rectangle.getSize().x && mouse.x >= rectangle.getPosition().x)
	{
		std::cout << "X clear" << std::endl;
	}

	if (mouse.y <= rectangle.getPosition().y + rectangle.getSize().y && mouse.y >= rectangle.getPosition().y)
	{
		std::cout << "Y clear" << std::endl;
	}

	*/

	if (mouse.x <= rectangle.getPosition().x + rectangle.getSize().x && mouse.x >= rectangle.getPosition().x && mouse.y <= rectangle.getPosition().y + rectangle.getSize().y && mouse.y >= rectangle.getPosition().y)
	{
	//	std::cout << "true" << std::endl;
		return true;
	}
	else
	{
	//	std::cout << "false" << std::endl;
		return false;
	}
}

void initializeMMHitboxes()
{
	mmSprStart.hitbox.setSize(sf::Vector2f(164, 49));
	mmSprContinue.hitbox.setSize(sf::Vector2f(270, 43));
	mmSprSettings.hitbox.setSize(sf::Vector2f(254, 52));
	mmSprCredits.hitbox.setSize(sf::Vector2f(225, 49));
	mmSprExit.hitbox.setSize(sf::Vector2f(114, 42));

	mmSprStart.hitbox.setFillColor(sf::Color::Transparent);
	mmSprContinue.hitbox.setFillColor(sf::Color::Transparent);
	mmSprSettings.hitbox.setFillColor(sf::Color::Transparent);
	mmSprCredits.hitbox.setFillColor(sf::Color::Transparent);
	mmSprExit.hitbox.setFillColor(sf::Color::Transparent);

	mmSprStart.hitbox.setPosition(318, 105);
	mmSprContinue.hitbox.setPosition(0, 0);
	mmSprSettings.hitbox.setPosition(272, 171);
	mmSprCredits.hitbox.setPosition(286, 235);
	mmSprExit.hitbox.setPosition(342, 305);
}

void repositionMMHitboxes()
{

}