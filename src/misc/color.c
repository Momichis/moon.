#include <stdlib.h>
#include <windows.h>
#include "../moon.h"

void Color(int Background, int Text){

	HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);
		int New_Color= Text + (Background * 16); 
		
			SetConsoleTextAttribute(Console, New_Color);
}


