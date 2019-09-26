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

Command* InputHandler::handleInput()
{
	assignInput();
	if (GetKeyState('Q') & 0x8000)
	{
		//buttonQ->execute();
		return buttonQ;
	}
	else if (GetKeyState('W') & 0x8000)
	{
		//buttonW->execute();
		return buttonW;
	}
	else if (GetKeyState('E') & 0x8000)
	{
		//buttonE->execute();
		return buttonE;
	}
	else if (GetKeyState('R') & 0x8000)
	{
		//buttonR->execute();
		return buttonR;
	}
	else if (GetKeyState('T') & 0x8000)
	{
		//buttonT->execute();
		return buttonT;
	}
	else if (GetKeyState('Y') & 0x8000)
	{
		//buttonY->execute();
		return buttonY;
	}
	else if (GetAsyncKeyState(VK_BACK))
	{
		//macroCom.remove();
	}
	//macroCom.execute();
	return NULL;
}
