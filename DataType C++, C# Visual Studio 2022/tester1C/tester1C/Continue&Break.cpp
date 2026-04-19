#include <iostream>

// 2 ta keyword mohem dar halghe ha vojud dare 
// Break: ke dar switch ham estefade mikonimesh
// Mitunim az loop kharej shim
// Continue: Radesh mikone ya'ni vaghti Instruction mirese be in
// Continue (dar while bar migarde be condition)
// Dar (for ham bar migarde be Increment/Decrement(Gam))
// Mesal:

int main() {

	int x = 5;
	while (x-- >= 0)
	{
		if (x == 1) 
		{
			continue;
		}
		std::cout << "Numbers: " << x << '\n';
	}
	for (; ;) break;

	for (int i = 0; i <= 10; ++i)
	{
		continue;
		std::cout << "In ejra nemishe kolan manzuram cout kolan ejra nemishe xD";
	}
	return 0;
}