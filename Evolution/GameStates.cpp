#include "Includes.h"

void handleGameStates()
{
	// std::cout << gameState << std::endl;

	switch (gameState)
	{
		case 0:
		{
			initializeGame();
			break;
		}

		case 1:
		{
			initializeMainMenu();
			break;
		}

		case 10:
		{
			handleMainMenu();
			break;
		}

		case 11:
		{
			// new game
			handleMainMenu();
			break;
		}

		case 12:
		{
			// continue
			handleMainMenu();
			break;
		}

		case 13:
		{
			// settings
			handleSettings();
			break;
		}

		case 14:
		{
			// std::cout << gameState << std::endl;
			// credits pressed
			handleMainMenu();

			break;
		}

		case 15:
		{
			// exit pressed
			window.close();

			break;
		}
	}
}