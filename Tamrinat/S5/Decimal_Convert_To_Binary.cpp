#include <iostream>

int main() {

	std::cout << "Enter decimal: ";
	int decimal;
	std::cin >> decimal;

	if(decimal >= 512)
	{
		decimal -= 512;
		std::cout << "1";
	}
	else if(!(decimal >= 512))
	{
		std::cout << "0";
	}

	if (decimal >= 256)
	{
		decimal -= 256;
		std::cout << "1";
	}
	else if (!(decimal >= 256))
	{
		std::cout << "0";
	}

	if (decimal >= 128)
	{
		decimal -= 128;
		std::cout << "1";
	}
	else if (!(decimal >= 128))
	{
		std::cout << "0";
	}

	if (decimal >= 64)
	{
		decimal -= 64;
		std::cout << "1";
	}
	else if (!(decimal >= 64))
	{
		std::cout << "0";
	}

	if (decimal >= 32)
	{
		decimal -= 32;
		std::cout << "1";
	}
	else if (!(decimal >= 32))
	{
		std::cout << "0";
	}

	if (decimal >= 16)
	{
		decimal -= 16;
		std::cout << "1";
	}
	else if (!(decimal >= 16))
	{
		std::cout << "0";
	}

	if (decimal >= 8)
	{
		decimal -= 8;
		std::cout << "1";
	}
	else if (!(decimal >= 8))
	{
		std::cout << "0";
	}

	if (decimal >= 4)
	{
		decimal -= 4;
		std::cout << "1";
	}
	else if (!(decimal >= 4))
	{
		std::cout << "0";
	}

	if (decimal >= 2)
	{
		decimal -= 2;
		std::cout << "1";
	}
	else if (!(decimal >= 2))
	{
		std::cout << "0";
	}

	if (decimal >= 1)
	{
		decimal -= 1;
		std::cout << "1";
	}
	else if (!(decimal >= 1))
	{
		std::cout << "0";
	}

	return 0;
}