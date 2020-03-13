#include "Includes.h"

void addMMAnimations()
{
	mmSprStart.multiAnim.resize(2);
	mmSprContinue.multiAnim.resize(2);
	mmSprSettings.multiAnim.resize(2);
	mmSprCredits.multiAnim.resize(2);
	mmSprExit.multiAnim.resize(2);

	//

	mmSprStart.multiAnim[0].addFrame(10.f, sf::IntRect(0, 0, 164, 49));
	mmSprStart.multiAnim[0].addFrame(10.f, sf::IntRect(164, 0, 164, 49));
	mmSprStart.multiAnim[0].addFrame(10.f, sf::IntRect(328, 0, 164, 49));

	mmSprStart.multiAnim[1].addFrame(10.f, sf::IntRect(0, 0, 186, 56));

	//

	mmSprContinue.multiAnim[0].addFrame(10.0f, sf::IntRect(0, 0, 270, 43));
	mmSprContinue.multiAnim[0].addFrame(10.0f, sf::IntRect(270, 0, 270, 43));
	mmSprContinue.multiAnim[0].addFrame(10.0f, sf::IntRect(540, 0, 270, 43));

	mmSprContinue.multiAnim[1].addFrame(10.f, sf::IntRect(0, 0, 319, 51));

	//

	mmSprSettings.multiAnim[0].addFrame(10.0f, sf::IntRect(0, 0, 254, 52));
	mmSprSettings.multiAnim[0].addFrame(10.0f, sf::IntRect(254, 0, 254, 52));
	mmSprSettings.multiAnim[0].addFrame(10.0f, sf::IntRect(508, 0, 254, 52));

	mmSprSettings.multiAnim[1].addFrame(10.f, sf::IntRect(0, 0, 316, 65));

	//

	mmSprCredits.multiAnim[0].addFrame(10.0f, sf::IntRect(0, 0, 225, 49));
	mmSprCredits.multiAnim[0].addFrame(10.0f, sf::IntRect(225, 0, 225, 49));
	mmSprCredits.multiAnim[0].addFrame(10.0f, sf::IntRect(450, 0, 225, 49));

	mmSprCredits.multiAnim[1].addFrame(10.f, sf::IntRect(0, 0, 271, 59));

	//

	mmSprExit.multiAnim[0].addFrame(10.0f, sf::IntRect(0, 0, 114, 42));
	mmSprExit.multiAnim[0].addFrame(10.0f, sf::IntRect(114, 0, 114, 42));
	mmSprExit.multiAnim[0].addFrame(10.0f, sf::IntRect(228, 0, 114, 42));

	mmSprExit.multiAnim[1].addFrame(10.f, sf::IntRect(0, 0, 154, 57));

	//

	mmSprStart.aMap.addAnimation("jiggle", mmSprStart.multiAnim[0], sf::seconds(0.27f));
	mmSprStart.aMap.addAnimation("big", mmSprStart.multiAnim[1], sf::seconds(0.27f));

	mmSprContinue.aMap.addAnimation("jiggle", mmSprContinue.multiAnim[0], sf::seconds(0.27f));
	mmSprContinue.aMap.addAnimation("big", mmSprContinue.multiAnim[1], sf::seconds(0.27f));

	mmSprSettings.aMap.addAnimation("jiggle", mmSprSettings.multiAnim[0], sf::seconds(0.27f));
	mmSprSettings.aMap.addAnimation("big", mmSprSettings.multiAnim[1], sf::seconds(0.27f));

	mmSprCredits.aMap.addAnimation("jiggle", mmSprCredits.multiAnim[0], sf::seconds(0.27f));
	mmSprCredits.aMap.addAnimation("big", mmSprCredits.multiAnim[1], sf::seconds(0.27f));

	mmSprExit.aMap.addAnimation("jiggle", mmSprExit.multiAnim[0], sf::seconds(0.27f));
	mmSprExit.aMap.addAnimation("big", mmSprExit.multiAnim[1], sf::seconds(0.27f));

	mmSprStart.animator = thor::Animator<sf::Sprite, std::string>::Animator(mmSprStart.aMap);
	mmSprContinue.animator = thor::Animator<sf::Sprite, std::string>::Animator(mmSprContinue.aMap);
	mmSprSettings.animator = thor::Animator<sf::Sprite, std::string>::Animator(mmSprSettings.aMap);
	mmSprCredits.animator = thor::Animator<sf::Sprite, std::string>::Animator(mmSprCredits.aMap);
	mmSprExit.animator = thor::Animator<sf::Sprite, std::string>::Animator(mmSprExit.aMap);
}

void animateMMSprites()
{

	//

	if (mmSprStart.currentAnimation != "jiggle" && mmSprStart.state == 0)
	{
		mmSprStart.animator.play() << "jiggle" << thor::Playback::loop("jiggle");
		mmSprStart.currentAnimation = "jiggle";
	}
	if (mmSprStart.currentAnimation != "big" && mmSprStart.state == 1)
	{
		mmSprStart.animator.play() << "big" << thor::Playback::loop("big");
		mmSprStart.currentAnimation = "big";
	}

	//

	if (mmSprContinue.currentAnimation != "jiggle" && mmSprContinue.state == 0)
	{
		mmSprContinue.animator.play() << "jiggle" << thor::Playback::loop("jiggle");
		mmSprContinue.currentAnimation = "jiggle";
	}

	if (mmSprContinue.currentAnimation != "big" && mmSprContinue.state == 1)
	{
		mmSprContinue.animator.play() << "big" << thor::Playback::loop("big");
		mmSprContinue.currentAnimation = "big";
	}

	//

	if (mmSprSettings.currentAnimation != "jiggle" && mmSprSettings.state == 0)
	{
		mmSprSettings.animator.play() << "jiggle" << thor::Playback::loop("jiggle");
		mmSprSettings.currentAnimation = "jiggle";
	}

	if (mmSprSettings.currentAnimation != "big" && mmSprSettings.state == 1)
	{
		mmSprSettings.animator.play() << "big" << thor::Playback::loop("big");
		mmSprSettings.currentAnimation = "big";
	}

	//

	if (mmSprCredits.currentAnimation != "jiggle" && mmSprCredits.state == 0)
	{
		mmSprCredits.animator.play() << "jiggle" << thor::Playback::loop("jiggle");
		mmSprCredits.currentAnimation = "jiggle";
	}

	if (mmSprCredits.currentAnimation != "big" && mmSprCredits.state == 1)
	{
		mmSprCredits.animator.play() << "big" << thor::Playback::loop("big");
		mmSprCredits.currentAnimation = "big";
	}

	//

	if (mmSprExit.currentAnimation != "jiggle" && mmSprExit.state == 0)
	{
		mmSprExit.animator.play() << "jiggle" << thor::Playback::loop("jiggle");
		mmSprExit.currentAnimation = "jiggle";
	}

	if (mmSprExit.currentAnimation != "big" && mmSprExit.state == 1)
	{
		mmSprExit.animator.play() << "big" << thor::Playback::loop("big");
		mmSprExit.currentAnimation = "big";
	}

	//

	mmSprStart.animator.update(sf::seconds(dFrameTime));
	mmSprStart.animator.animate(mmSprStart.sprite);

	mmSprContinue.animator.update(sf::seconds(dFrameTime));
	mmSprContinue.animator.animate(mmSprContinue.sprite);

	mmSprSettings.animator.update(sf::seconds(dFrameTime));
	mmSprSettings.animator.animate(mmSprSettings.sprite);

	mmSprCredits.animator.update(sf::seconds(dFrameTime));
	mmSprCredits.animator.animate(mmSprCredits.sprite);

	mmSprExit.animator.update(sf::seconds(dFrameTime));
	mmSprExit.animator.animate(mmSprExit.sprite);
}

void updateMMBubbles()
{
	if (mmSprBubble15.sprite.getPosition().y > -450)
	{
		mmSprBubble15.sprite.move(0, -30 * dFrameTime);
	}
	else
	{
		mmSprBubble15.sprite.setPosition(0, 450);
	}

	if (mmSprBubble15dop.sprite.getPosition().y > -450)
	{
		mmSprBubble15dop.sprite.move(0, -30 * dFrameTime);
	}
	else
	{
		mmSprBubble15dop.sprite.setPosition(0, 450);
	}

	if (mmSprBubble35.sprite.getPosition().y > -450)
	{
		mmSprBubble35.sprite.move(0, -40 * dFrameTime);
	}
	else
	{
		mmSprBubble35.sprite.setPosition(0, 450);
	}

	if (mmSprBubble35dop.sprite.getPosition().y > -450)
	{
		mmSprBubble35dop.sprite.move(0, -40 * dFrameTime);
	}
	else
	{
		mmSprBubble35dop.sprite.setPosition(0, 450);
	}

	if (mmSprBubble60.sprite.getPosition().y > -450)
	{
		mmSprBubble60.sprite.move(0, -50 * dFrameTime);
	}
	else
	{
		mmSprBubble60.sprite.setPosition(0, 450);
	}

	if (mmSprBubble60dop.sprite.getPosition().y > -450)
	{
		mmSprBubble60dop.sprite.move(0, -50 * dFrameTime);
	}
	else
	{
		mmSprBubble60dop.sprite.setPosition(0, 450);
	}
}