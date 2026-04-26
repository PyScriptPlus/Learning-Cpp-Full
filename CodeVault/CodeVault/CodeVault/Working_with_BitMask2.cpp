#include <iostream>
#include <bitset>

int main() {
	// Ba bitset ham mishe nevesht rahat tar ham hast
	constexpr std::bitset<8> mask0 = 0x01;
	constexpr std::bitset<8> mask1 = 0x02;
	constexpr std::bitset<8> mask2 = 0x04;
	constexpr std::bitset<8> mask3 = 0x08;
	constexpr std::bitset<8> mask4 = 0x10;
	constexpr std::bitset<8> mask5 = 0x20;
	constexpr std::bitset<8> mask6 = 0x40;
	constexpr std::bitset<8> mask7 = 0x80;

	std::bitset<8> flags = 0b0000'0101;
	//test: chap in rahat tar ham hast
	std::cout << "Check Bit2: " << (flags & mask2) << '\n';

	//set:
	flags |= (mask1 | mask3); // 1111
	std::cout << "Check Bit1&3: " << (flags & (mask1 | mask3)) << '\n';

	//reset:
	flags &= ~(mask1 | mask3); // 0101
	std::cout << "Check Bit1&3: " << (flags & (mask1 | mask3)) << '\n';

	//flip:
	flags ^= (mask0 | mask1); // 0110
	std::cout << "Check Bit0&1: " << (flags & (mask0 | mask1)) << '\n';

	std::cout << "All bits: " << flags << '\n';

	return 0;
}