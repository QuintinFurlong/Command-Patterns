#include <iostream>
#include <Windows.h>
#include "MacroCommand.h"
using namespace std;

int main()
{
	MacroCommand macCom;
	while (true)
	{	
		macCom.execute();
		
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