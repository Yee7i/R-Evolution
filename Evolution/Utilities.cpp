#include "Includes.h"

std::filesystem::path getProgramPath()
{
    return std::filesystem::current_path();
}

void calculateMMMousePosition()
{
	sf::Vector2i v2iMousePosition = sf::Mouse::getPosition(window);

	v2fLetterboxSize = getLetterboxSize(defaultView, window.getSize().x, window.getSize().y);

	mousePosition = sf::Vector2i
	(
		(v2iMousePosition.x - v2fLetterboxSize.x) / ((window.getSize().x - 2 * v2fLetterboxSize.x) / 800.f),
		(v2iMousePosition.y - v2fLetterboxSize.y) / ((window.getSize().y - 2 * v2fLetterboxSize.y) / 450.f)
	);

	// DIAGNOSTICS
	/*	
	std::cout << "letterbox - " << v2fLetterboxSize.x << " " << v2fLetterboxSize.y << std::endl;
	std::cout << "mouse - " << v2iMousePosition.x << " " << v2iMousePosition.y << std::endl;
	std::cout << "translated - " << mousePosition.x << " " << mousePosition.y << std::endl;
	std::cout << "res - " << (window.getSize().x / 800.f) << " " << (window.getSize().y / 450.f) << std::endl;
	std::cout << "wsize - " << window.getSize().x << " " << window.getSize().y << std::endl;
	std::cout << "scale - " << ((window.getSize().x - 2 * v2fLetterboxSize.x) / 800.f) << " " << ((window.getSize().y - 2 * v2fLetterboxSize.y) / 450.f) << std::endl;
	std::cout << "aspect - " << dAspectRatio << std::endl;
	*/
}