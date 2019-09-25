#include "MacroCommand.h"

MacroCommand::MacroCommand()
{
	activeCommands = 0;
}

MacroCommand::~MacroCommand()
{
}

void MacroCommand::add(Command* t_command)
{
	while (activeCommands < commands->size())
	{
		commands->pop_back();
	}
	commands->push_back(t_command);
	activeCommands = commands->size();
}

void MacroCommand::remove(Command* t_command)
{
	activeCommands--;
}

void MacroCommand::execute()
{
	int used = 0;
	for (std::list<Command>::iterator it = commands->front; it != commands->end; ++it)
	{
		if (used >= activeCommands)
		{
			break;
		}
		it->execute;
		used++;
	}
}
