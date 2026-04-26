// Omadam 2 ta variable sade rikhtam toye 1 Namespace moshakhas shode
// Vali dar ja haye mokhtalef yeki toye Header file circle.hpp
// Yeki dige toye Header file growth.hpp
#include <iostream>
#include "circle.hpp"
#include "growth.hpp"

int main() {

	std::cout << "pi: " << basicMath::pi << '\n';
	std::cout << "e: " << basicMath::e << '\n';

	return 0;
}

