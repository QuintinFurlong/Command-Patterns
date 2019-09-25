#include "InputHandler.h"
#include <Windows.h>

void InputHandler::assignInput()
{
	buttonQ = new QCommand;
	buttonW = new WCommand;
	buttonE = new ECommand;
	buttonR = new RCommand;
	buttonT = new TCommand;
	buttonY = new YCommand;
}

void InputHandler::handleInput()
{
	if (GetKeyState('Q') & 0x8000)
	{
		buttonQ->execute();

	}
	else if (GetKeyState('W') & 0x8000)
	{
		buttonW->execute();
	}
	else if (GetKeyState('E') & 0x8000)
	{
		buttonE->execute();
	}
	else if (GetKeyState('R') & 0x8000)
	{
		buttonR->execute();
	}
	else if (GetKeyState('T') & 0x8000)
	{
		buttonT->execute();
	}
	else if (GetKeyState('Y') & 0x8000)
	{
		buttonY->execute();
	}
	else if (GetAsyncKeyState(VK_BACK))
	{
		buttonQ->undo();
	}
}
