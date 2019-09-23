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
	commands->push_back(t_command);
	activeCommands = commands->size();
}

void MacroCommand::remove(Command* t_command)
{
	commands->pop_back();
	activeCommands--;
}

void MacroCommand::execute()
{

}
