#include <iostream>

int main() {

	/*
		AND &&:
		True && True --> True
		True && False --> False
		False && True --> False
		False && False --> False
	*/
	
	/*
		OR ||:
		True || True --> True
		True || False --> True
		False || True --> True
		False || False --> False
	*/

	/* 
	Not:
	!
	*/
	int x = 5;
	int y = 0;
	int z = 22;

	std::cout << std::boolalpha;
	std::cout << (x && z) << '\n';
	std::cout << (x && y) << '\n';
	std::cout << (y && y) << '\n';
	std::cout << (y || y) << '\n';
	std::cout << (y || z) << '\n';
	std::cout << (x || z) << '\n';
	std::cout << !(y && y) << '\n';

	if (y || true)
	{
		std::cout << "Block1" << '\n';
	}
	if (x && false)
	{
		// Ejra nemishe false output !!!
	}
	else
	{
		std::cout << "Block2" << '\n';
	}
	if (!x || false)
	{
		
	}
	else
	{
		std::cout << "Block2" << '\n';
	}

	return 0;
}