#include <iostream>

int main() {

	// Syntax:
	/*
		if (Condition)
			Statement;

		//----------------------------//

		if(Condition)
			Statement;
		else
			Statement

		//----------------------------//

		if (Condition)
		{
			Statement;
		}

		//----------------------------//

		if (Condition)
		{
			Statement;
		}
		else
		{
			Statement;
		}
	*/

	// Nokte:
	if (true)
		;
	// Compiler code bala ro be in code payini tabdil mikone
	if (true)
	{
		;
	}
	// Chera ino goftam? Chon age in nokte bala ro naduni
	// In eshtebah mikoni:
	/*
		if (true)
			int x;

		x = 3; // Error (Out of Scope)
	*/

	return 0;
}