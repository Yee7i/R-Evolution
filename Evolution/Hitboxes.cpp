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