#include <iostream>
#include <cstdint>
#include <bitset>

int main() {
	// Ba 3 ravesh mitunim
	// BitMask besazim baraye chand bit 
	// Yani tosh dige mesl in mask0 faghat bit shomare 0 Target konim
	// Ba in mitunim har chand ta bit lazem darim toye yek Mask Target konim
	
	// Binary Literal:
	// Kheyli rahate onayi ke mikhaym Target she 1 mizarim :)
	constexpr std::uint16_t maskBinary = 0b0000'0000'1111'1111;

	// Hexadecimal:
	// Injurie ke har 1 bit shamel 4 bit mishe
	// Ya'ni age benevisim 0x00 injurie --> 0000'0000
	// Ya injuri 0x10 --> 0001'0000
	// Age adad bod decimal sho peyda kon hala tabdil kon be Binary benevis
	// Mesal 0xA --> hamon 10Decimal hast be Binary mishe --> 1010
	// Ya mesal dige 0xC2 khob C be Decimal 12 hast be Binary mishe --> 1100
	// Hala 2 ke Decimalesh hamon 2 be Binary mishe --> 0010
	// Hala kenar ham az samt LSB minevisim --> 1100'0010
	// Hexadecimal pishnahad mishe baraye estefade
	constexpr std::uint32_t maskHexadecimal = 0x1F; // 0001'1111


	// Shift:
	// Formul dare kheyli rahate
	// ((1 << Length) -1) << Position
	// Length yani tedad ke mikhaym 1 shift she be samt chap
	// -1 Ham mishe on tedadi ke shift dadim mesal (1 << 4) --> 0001'0000
	// Hala -1 on 1 ro 0 mikone posht saresh harchi 0 has ro 1 mikone
	// Injuri mishe --> 0000'1111
	// Hala Position ham mesal man mikham bit ham az Bit Position 2 shoru konand
	// Minevisim 2 hamashon 2 ta shift mide be samt chap
	// Injuri: ((1 << 4) -1) << 2  --> 0011'1100
	constexpr std::uint8_t maskShift = ((1 << 4) - 1) << 4; // 1111'0000



	return 0;
}
