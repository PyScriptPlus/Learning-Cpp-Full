#include <iostream>

// Local Variable ha mitunam toye Block haye to dar to ta'rif beshan
// Vali ghavanin baraye Scope va Duration baz hamune
// Berim ba mesal bebinim:

int main() {

	int x = 50; // x enters scope and is created (Duration) here
	// x dar inja dar dast ras hast
	std::cout << x << '\n';
	{ // Nested Block
		float y = 44.0f; // y enters scope and is created (Duration) here
		// x dar inja dar dast ras hast
		std::cout << x << '\n';
		// y dar inja dar dast ras hast
		std::cout << y << '\n';
		// y dar inja dar dast ras hast
	} // y goes out of scope and is destroyed here

	// y can not be used here because it is out of scope in this block
	//std::cout << y << '\n'; // Error

	// x dar inja dar dast ras hast
	std::cout << x << '\n';

	return 0;
} // x goes out of scope and is destroyed here