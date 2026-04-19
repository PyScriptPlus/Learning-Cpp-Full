#include <iostream>
#include <random>

int main() {

	std::random_device rnd;

	std::uniform_int_distribution dist(1, 10);
	uintptr_t ww;
	intptr_t wa;
	
	
	std::cout << rnd.entropy();


	return 0;
}