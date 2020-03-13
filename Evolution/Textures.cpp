#include "Includes.h"

void loadMMTextures()
{
	bool allLoaded = true;

	mmSprBackground.texture.resize(1);
	mmSprBubble15.texture.resize(1);
	mmSprBubble35.texture.resize(1);
	mmSprBubble60.texture.resize(1);
	mmSprStart.texture.resize(2);
	mmSprContinue.texture.resize(2);
	mmSprSettings.texture.resize(2);
	mmSprCredits.texture.resize(2);
	mmSprExit.texture.resize(2);

	if (mmSprBubble15.texture[0].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmBubble15.png"))
	{
		std::cout << "Loaded Bubble15\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (mmSprBubble35.texture[0].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmBubble35.png"))
	{
		std::cout << "Loaded Bubble35\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (mmSprBubble60.texture[0].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmBubble60.png"))
	{
		std::cout << "Loaded Bubble60\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (mmSprBackground.texture[0].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmBackground.png"))
	{
		std::cout << "Loaded Background\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (mmSprContinue.texture[0].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmContinue.png"))
	{
		std::cout << "Loaded Continue\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (mmSprContinue.texture[1].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmContinueBig.png"))
	{
		std::cout << "Loaded ContinueBig\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (mmSprCredits.texture[0].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmCredits.png"))
	{
		std::cout << "Loaded Credits\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (mmSprCredits.texture[1].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmCreditsBig.png"))
	{
		std::cout << "Loaded CreditsBig\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (mmSprExit.texture[0].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmExit.png"))
	{
		std::cout << "Loaded Exit\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (mmSprExit.texture[1].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmExitBig.png"))
	{
		std::cout << "Loaded ExitBig\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (mmSprSettings.texture[0].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmSettings.png"))
	{
		std::cout << "Loaded Settings\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (mmSprSettings.texture[1].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmSettingsBig.png"))
	{
		std::cout << "Loaded SettingsBig\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (mmSprStart.texture[0].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmStart.png"))
	{
		std::cout << "Loaded Start\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (mmSprStart.texture[1].loadFromFile(workingDirectory.u8string() + "//textures//mainMenu//mmStartBig.png"))
	{
		std::cout << "Loaded StartBig\n";
	}
	else
	{
		std::cout << "Couldn't load a texture, verify files integrity or download it again\n";
		allLoaded = false;
	}

	if (!allLoaded)
	{
		window.close();
	}
}