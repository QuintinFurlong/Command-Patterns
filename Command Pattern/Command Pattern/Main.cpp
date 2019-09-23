#include <iostream>
#include <Windows.h>
#include "InputHandler.h"
using namespace std;

int main()
{
	InputHandler inputHandler;
	inputHandler.assignInput();
	while (true)
	{	
		inputHandler.handleInput();
		//cout << getchar();
		if (GetKeyState('Q') & 0x8000)
		{
			//cout << "q";
		}
		if (GetKeyState(' ') & 0x8000)
		{
			break;
		}
	}
}