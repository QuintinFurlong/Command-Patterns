#pragma once
#include "Command.h"

class InputHandler
{
public:
	void assignInput();
	void handleInput();
private:
	Command* buttonQ;
	Command* buttonW;
	Command* buttonE;
	Command* buttonR;
	Command* buttonT;
	Command* buttonY;
};