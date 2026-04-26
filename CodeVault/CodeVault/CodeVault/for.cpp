// Syntax for:
/*
for(initialize variable; condition; Increment/Decrement)
{
	Body;
}

Trace:
for( 1 ; 2 ; 4)
	3;

Bi nahayat:
for( ; ; )
{
	Statement;
	Statement;
}
*/

#include <iostream>
#include <stdio.h>
#include <vector>

auto loop(int counter = 0) -> void;
auto reverse() -> void;
auto newFor() -> void;

int main() {

	loop();
	reverse();
	newFor();

	return 0;
}

// Syntax nemidunam chera inghadr pichide kardam xD
auto loop(int counter) -> void
{
	for (; counter <= 10; ++counter)
	{
		printf("Number is: %d\n", counter);
	}
	return;
}

// Vaghti for minevisi Tap mizani kamelesh kone
// DataType size_t ro mizare automat hala in koja estefade mishe
// Dar Array ha Vector va ... ziad estefade mishe kheyli khubeh
// size_t : Yek no' dade adadi unsigned dar C/C++ hast
// Baraye namayesh andaze va Index ha estefade mishe
// Baraye negahdari: Andaze hafeze, Andaze Arraye, Natayej function sizeof()

// Mesal:

auto reverse() -> void
{
	std::vector name = { "M","O","H","A","M","M","A","D" };
	/*
		In moshkel dare ayande yad migirim
		for (size_t index = name.size() - 1; index >= 0; --index)
		{
			std::cout << name[index];
		}
	*/
	for (size_t index = name.size(); index-- > 0; )
	{
		std::cout << name[index];
	}
	std::cout << "\n\n";
	return;
}

// For jadid ke dar C++11 moa'refi shod
// Baraye peymayesh Arraye behtare mesl foreach hast
auto newFor() -> void
{
	std::string myName{ "Mohammad" };
	for (char var : myName) 
	{
		std::cout << var << '\n';
	}
	return;
}