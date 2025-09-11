#ifndef B_HPP
#define B_HPP
#include <iostream>
#include "a.hpp"

// x = 41; // Error
// Toye global nemishe dastkari anjam dad
// Toye fazaye Global mishe faghat ta'rif koni mesl:
// Variable, Function, Class va ...

// Hala age khastim dastkari konim chand rah dare:
// Berizim dakhel yek Variable dige ya berizim toye Function:
// Baraye har 2 ta mesal mizanm

extern int g_x = (x += 50);

void doSomething(int y) {
	std::cout << ((++x) - y) << '\n';
	return;
}

#endif