#pragma once
#include "Command.h"
class InputHandler
{
public:
	InputHandler() {};
	void assignInput();
	Command* handleInput();
private:
	Command* buttonQ;
	Command* buttonW;
	Command* buttonE;
	Command* buttonR;
	Command* buttonT;
	Command* buttonY;
};