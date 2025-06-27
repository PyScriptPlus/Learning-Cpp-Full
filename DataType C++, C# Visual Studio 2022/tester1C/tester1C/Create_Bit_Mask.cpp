#include <iostream>
#include <cstdint>

// Bit Mask chiye? Ma yek seri Bitwise Operator dashtim ke 
// Mishod amaliyat ba ona anjam dad 
// Vali ye chizi bod on amaliyat ke anjam midadim bar hameye Bit ha shamel
// Mishod hala Mask be ma komak mikone on bit hayi ke mikhaym amaliyat anjam
// Bedim ro target bezanim 
// 3Ravesh baraye sakht Mask darim ke payin minevisam
/*	
	1-Binary Literal:
	Kheyli rahate oni ke mikhay amaliyat anjam bedi bahash 1 mizarim
	Va onayi ke lazem nist 0 mizari
	Yani onayi ke mikhaym Dast kari she 1 onayi ke nemikhaym 0 mizarim
	Felan baraye har mask 1 dune mizarim 
	Mesal: mask0 faghat bit shomare 0 ya mask 1 faghat bit shomare 1
*/
/*
	2-Shift:
	Kheyli rahate 2 ta Operand mikhad va yeki Operator
	1 << Position
	Operand samt chap hamishe 1 chon mikhaym 1 bit khas roshan bashe baghiye 0
	Position ham jaygah ke mikhaym on 1 ro Hol bedim be samt
*/
/*
	3-Hexadecimal:
	Kheyli rahate 2x mishe yani chi?
	Decimal sho peyda mikoni x2 mikoni ba'ad HexaDecimal sho minevisi
	Mesal: 0x10 mishe 16Decimal 16 * 2 = 32Decimal
	Hala Decimal 32 be Hexa chand mishe? 0x20
	Avvalesham az 0x01 shoru mishe ta ....

*/

int main() {

	// Binary Literal:
	constexpr std::uint8_t maskBinary0 = 0000'0001;
	constexpr std::uint8_t maskBinary1 = 0000'0010;
	constexpr std::uint8_t maskBinary2 = 0000'0100;
	constexpr std::uint8_t maskBinary3 = 0000'1000;
	constexpr std::uint8_t maskBinary4 = 0001'0000;
	constexpr std::uint8_t maskBinary5 = 0010'0000;
	constexpr std::uint8_t maskBinary6 = 0100'0000;
	constexpr std::uint8_t maskBinary7 = 1000'0000;

	// Shift:
	constexpr std::uint8_t maskShift0 = 1 << 0;
	constexpr std::uint8_t maskShift1 = 1 << 1;
	constexpr std::uint8_t maskShift2 = 1 << 2;
	constexpr std::uint8_t maskShift3 = 1 << 3;
	constexpr std::uint8_t maskShift4 = 1 << 4;
	constexpr std::uint8_t maskShift5 = 1 << 5;
	constexpr std::uint8_t maskShift6 = 1 << 6;
	constexpr std::uint8_t maskShift7 = 1 << 7;

	// Hexadecimal:
	constexpr std::uint8_t maskHexadecimal0 = 0x01;
	constexpr std::uint8_t maskHexadecimal1 = 0x02;
	constexpr std::uint8_t maskHexadecimal2 = 0x04;
	constexpr std::uint8_t maskHexadecimal3 = 0x08;
	constexpr std::uint8_t maskHexadecimal4 = 0x10;
	constexpr std::uint8_t maskHexadecimal5 = 0x20;
	constexpr std::uint8_t maskHexadecimal6 = 0x40;
	constexpr std::uint8_t maskHexadecimal7 = 0x80;

	return 0;
}