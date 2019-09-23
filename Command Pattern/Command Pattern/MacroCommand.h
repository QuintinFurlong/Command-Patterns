#pragma once
#include "Command.h"
#include <list>

class MacroCommand : public Command
{
public:
	MacroCommand();
	virtual ~MacroCommand();
	virtual void add(Command* t_command);
	virtual void remove(Command* t_command);
	virtual void execute();
private:
	std::list<Command*>* commands;
	int activeCommands;
};