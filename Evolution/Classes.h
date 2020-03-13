#include "Includes.h"

#pragma once

namespace at
{
	/*
	class MultiAnimation
	{
	public:
		std::vector<thor::FrameAnimation> multiAnim;
	};
	*/

	class AlternatingSprite
	{
	public:

		AlternatingSprite() : animator(aMap) {}

		sf::Sprite sprite;
		std::vector<sf::Texture> texture;
		sf::RectangleShape hitbox;
		int state = 0;
		std::vector<thor::FrameAnimation> multiAnim;
		thor::AnimationMap<sf::Sprite, std::string> aMap;
		thor::Animator<sf::Sprite, std::string> animator;
		std::string currentAnimation;
	};
}