#include <iostream>
#include <bitset>

int main() {

	// Agar yadet bashe ma yek seri
	// Assignment Operator dashtim khob inaro 
	// Baraye mabhas Bit Manipulation ham darim
	// Baraye mesal:
	// x = x >> 1;
	// Bejaye code balayi mitunim injuri benevisim:
	// x >>= 1;

	// Berim baraye hamashon benevisim:
	// x <<= 1; Left Shift
	// x >>= 1; Right Shift
	// x |= y; Bitwise OR
	// x &= y; Bitwise AND
	// x ^= y; Bitwise XOR --> Exclusive OR
	// Baraye NOT injuri dige: x = ~x; Bitwise NOT

	// Mesal codi hasham bezanim:

	std::bitset<4> mybit = 0b0011;
	// In dige meghdar jadid tolid nemikone ha taghir mostaghim bar roye 
	// bitset mybit anjam mide baraye hamishe
	mybit <<= 1; 
	std::cout << "Left Shift: " << mybit << '\n';
	mybit >>= 1;
	std::cout << "Right Shift: " << mybit << '\n';

	std::bitset<4> mybit1 = 0b1010;
	std::bitset<4> mybit2 = 0b0011;
	mybit1 |= mybit2;
	std::cout << "Bitwise OR: " << mybit1 << '\n'; // Output --> 1011
	// Alan mybit1: 1011 hast
	mybit1 &= mybit2;
	std::cout << "Bitwise AND: " << mybit2 << '\n'; // Output --> 0011

	std::bitset<4> x = 0b1011;
	std::bitset<4> y = 0b1101;

	x ^= y;
	std::cout << "Bitwise XOR: " << x << '\n'; // Output --> 0110

	y = ~y;
	std::cout << "Bitwise NOT: " << y << '\n'; // Output --> 0010;

	return 0;
}