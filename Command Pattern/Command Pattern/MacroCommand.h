#pragma once
#include "Command.h"
#include "InputHandler.h"
#include <list>
#include <string>

class MacroCommand : public Command
{
public:
	MacroCommand();
	virtual ~MacroCommand();
	virtual void add(Command* t_command);
	virtual void remove();
	virtual void execute();
private:
	std::list<Command*>* commands;
	int activeCommands;

	string typedLetters;
	int activeLetters;
	InputHandler inputHandler;
};