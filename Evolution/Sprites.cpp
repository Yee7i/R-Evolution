#include "Includes.h"

void loadMMSprites()
{
	mmSprBubble15.sprite.setTexture(mmSprBubble15.texture[0]);
	mmSprBubble15dop.sprite.setTexture(mmSprBubble15.texture[0]);
	mmSprBubble35.sprite.setTexture(mmSprBubble35.texture[0]);
	mmSprBubble35dop.sprite.setTexture(mmSprBubble35.texture[0]);
	mmSprBubble60.sprite.setTexture(mmSprBubble60.texture[0]);
	mmSprBubble60dop.sprite.setTexture(mmSprBubble60.texture[0]);
	mmSprBackground.sprite.setTexture(mmSprBackground.texture[0]);
	mmSprContinue.sprite.setTexture(mmSprContinue.texture[0]);
	mmSprCredits.sprite.setTexture(mmSprCredits.texture[0]);Resolutio
	mmSprExit.sprite.setTexture(mmSprExit.texture[0]);
	mmSprSettings.sprite.setTexture(mmSprSettings.texture[0]);
	mmSprStart.sprite.setTexture(mmSprStart.texture[0]);
}

void retexMMSprites()
{
	mmSprContinue.sprite.setTexture(mmSprContinue.texture[mmSprContinue.state]);
	mmSprCredits.sprite.setTexture(mmSprCredits.texture[mmSprCredits.state]);
	mmSprExit.sprite.setTexture(mmSprExit.texture[mmSprExit.state]);
	mmSprSettings.sprite.setTexture(mmSprSettings.texture[mmSprSettings.state]);
	mmSprStart.sprite.setTexture(mmSprStart.texture[mmSprStart.state]);
}

void positionMMSprites()
{
	mmSprBubble15.sprite.setPosition(0, 0);
	mmSprBubble15dop.sprite.setPosition(0, -450);
	mmSprBubble35.sprite.setPosition(0, 0);
	mmSprBubble35dop.sprite.setPosition(0, -450);
	mmSprBubble60.sprite.setPosition(0, 0);
	mmSprBubble60dop.sprite.setPosition(0, -450);
	mmSprBackground.sprite.setPosition(0, 0);
	mmSprStart.sprite.setPosition(318, 105);
	mmSprSettings.sprite.setPosition(272, 171);
	mmSprCredits.sprite.setPosition(286, 235);
	mmSprExit.sprite.setPosition(342, 305);
}