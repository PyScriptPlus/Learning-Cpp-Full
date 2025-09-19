// Mesal codi dige mizanm bebin che etefaghi daghighan miofte

#include <iostream>

int getInteger() {

	static bool s_check = true;
	if (s_check)
	{
		std::cout << "Enter first Number: ";
		s_check = false;
	}
	else
	{
		std::cout << "Enter another Number: ";
	}
	int x;
	std::cin >> x;

	return x;
}


int main() {

	int a = getInteger();
	int b = getInteger();

	std::cout << a << " + " << b << " = " << (a + b) << '\n';

	return 0;
}