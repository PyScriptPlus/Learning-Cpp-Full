#include <iostream>
#include "b.hpp"
#include "a.hpp"

int main() {

	std::cout << x << '\n';
	//std::cout << g_x << '\n';
	doSomething(1);
	std::cout << x << '\n';
	x -= 51;
	std::cout << x << '\n';

	return 0;
}