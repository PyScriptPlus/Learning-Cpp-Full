// Mesal codi dige mizanm bebin che etefaghi daghighan miofte

#include <iostream>

int getInteger() {

	static bool check = true;
	if (check)
	{
		std::cout << "Enter first Number: ";
		check = false;
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