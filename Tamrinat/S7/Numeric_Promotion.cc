#include <iostream>

void printInt(int x) {
	std::cout << x << '\n';
	return;
}

void printDouble(double x) { std::cout << x << '\n'; return;}


int main() {

	// Integral:
	printInt(5); // Int
	short num = 4;
	printInt(num); // Short to Int
	printInt('a'); // Char to Int
	printInt(true); // Bool to Int
	unsigned short num1 = 5;
	printInt(num1); // Unsigned Short to Int

	// C++20: char8_t // C++11: char16_t //C++11: char32_t
	char8_t character = u8'b';
	printInt(character); // char8_t to Int
	

	// Floating-Point:
	printDouble(5.2); // Double
	printDouble(5.69f); // Float to Double

	return 0;
}
