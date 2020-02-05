#include "Includes.h"

void handleGameStates()
{
	switch (gameState)
	{
		case 0:
		{
			initializeGame();
		}

		case 1:
		{
			initializeMainMenu();
		}

		case 10:
		{
			handleMainMenu();
		}

		case 11:
		{

		}
	}
}