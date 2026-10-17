#include <iostream>
#include <bitset>
#include <cstdint>

std::int8_t returnCharacter(int num5);

int main() {

	int num = 5; // Decimal its ez
	

	// HexaDecimal:
	// 97 -- > Binary 0110_0001 --> 61
	std::cout << std::bitset<7>(97) << '\n';
	char num2 = 0x61;
	std::cout << num2 << '\n';

	// Octal:
	// 98 --> Binary 01_100_010 --> 142
	std::cout << 0b01100010 << '\n';
	char num3 = 0142; // b :D
	std::cout << num3 << '\n';

	std::int8_t num4 = 0x61;
	std::cout << num4 << '\n'; // a :D

	std::cout << returnCharacter(0142) << '\n'; // b :D

	return 0;
}

std::int8_t returnCharacter(int num5) {
	return num5;
}

