#include <iostream>
#include <cstdint>
#include <format>
#define pr(str) std::cout << str << '\n';

// Sakhtan BitMask yad gerftim Bitwise Operator ha ham yad gerftim
// Hala berim bebinim chejuri mishe bahashon kar kard
// Ya'ani: Roye bit ha amaliyat anjam Bedim.
// Ravesh Hexadecimal miram jolo toye Mask ha har 3 ravesh mishe
// Kodum kamel baladi va rahati boro jolo ba on ravesh
// Mikham 4 ta Function bod asli
// 1-test() Ba estefade az Bitwise AND --> &
// 2-set() Ba estefade az Bitwise OR --> |
// 3-reset() Ba estefade az tarkib Bitwise AND --> & va Bitwise NOT --> ~
// 4-flip() Ba estefade az Bitwise XOR --> ^
// Ba ina anjam bedam

int main() {

	constexpr std::uint8_t mask0 = 0x01;
	constexpr std::uint8_t mask1 = 0x02;
	constexpr std::uint8_t mask2 = 0x04;
	constexpr std::uint8_t mask3 = 0x08;
	constexpr std::uint8_t mask4 = 0x10;
	constexpr std::uint8_t mask5 = 0x20;
	constexpr std::uint8_t mask6 = 0x40;
	constexpr std::uint8_t mask7 = 0x80;

	std::uint8_t flags = 0b0000'1010;
	// test: Mikham barresi konam bit shomare 2 On ya Off
	// 2 Ravesh dare ya tabdil konam be boolean 0 ya 1 daryaft konam
	// Chon nemishe uint8_t 0 ya 1 begiram bitset faghat mishod
	// Ya az Ternary Operator estefade konam
	// Har 2 ta ro miram
	std::cout << "Check bit2: " << static_cast<bool>(flags & mask2) << '\n';
	// To in code payini kami ada dar ovardam xD
	pr(std::format("Check bit3: {}\n", static_cast<bool>(flags & mask3)));
	
	// set:
	//flags |= mask0; Taki am mishe nevesht
	// Chand ta am mituni yek ja ON koni
	flags |= (mask0 | mask2);
	std::cout << "Bit0: " << ((flags & mask0) ? "ON\n" : "OFF\n");
	std::cout << "Bit2: " << ((flags & mask2) ? "ON\n" : "OFF\n");

	// reset:
	//flags &= ~mask0; //Taki am mishe
	// Bazam mituni chand ta am yek ja OFF koni
	//flags &= (~mask0 & ~mask2); Ino taze yad gerftam
	// Vali aslih injuri: 
	flags &= ~(mask0 | mask2);
	// 2 Ta sho yekja check kardam :)
	std::cout << "Check Bit0&2: " <<
		((flags & (mask0 | mask2)) ? "ON\n" : "OFF\n") << '\n';	
	//std::cout << "Mask0: " << ((flags & mask0) ? "ON\n" : "OFF\n");
	//std::cout << "Mask2: " << ((flags & mask2) ? "ON\n" : "OFF\n");

	// flip:
	//flags ^= mask1; //Taki am mishe
	// Bazam mituni chand ta am yek ja flip koni
	flags ^= (mask1 | mask2);
	std::cout << "Bit1: " << ((flags & mask1) ? "ON\n" : "OFF\n");
	std::cout << "Bit2: " << ((flags & mask2) ? "ON\n" : "OFF\n");

	return 0;
}