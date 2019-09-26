#include "MacroCommand.h"
#include <chrono>
#include <thread>

MacroCommand::MacroCommand()
{
	activeCommands = 0;
	activeLetters = 0;
	typedLetters = "";
}

MacroCommand::~MacroCommand()
{
}

void MacroCommand::add(Command* t_command)
{
	if (commands != nullptr)
	{
		while (activeCommands < commands->size())
		{
			commands->pop_back();
		}
		commands->push_back(t_command);
		activeCommands = commands->size();
	}
	else
	{
		commands->push_back(t_command);
		activeCommands = 1;
	}
}

void MacroCommand::remove()
{
	activeCommands--;
}

void MacroCommand::execute()
{
	Command* current = inputHandler.handleInput();
	if (current != NULL)
	{
		current->addString(&typedLetters);
		current->execute();
		system("CLS");
		cout << typedLetters;
		std::this_thread::sleep_for(std::chrono::milliseconds(250));
	}
	/*if (commands != nullptr)
	{
		int used = 0;
		std::vector<Command*>::iterator it;
		for (it = commands->begin(); it != commands->end(); ++it)
		{
			(*it)->execute();
			used++;
			if (used >= activeCommands)
			{
				break;
			}
		}
	}*/
}
