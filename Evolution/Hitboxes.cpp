#include "Includes.h"

bool mouseInRectangle(sf::RectangleShape rectangle, sf::Vector2i mouse)
{
	if (mouse.x < rectangle.getPosition().x + rectangle.getSize().x && mouse.x > rectangle.getPosition().x&& mouse.y < rectangle.getPosition().y + rectangle.getSize().y && mouse.y > rectangle.getPosition().y)
	{
		return true;
	}
	else
	{
		return false;
	}
}