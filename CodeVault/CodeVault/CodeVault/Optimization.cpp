#include <iostream>
#include <cstdint>

namespace mask {
	constexpr std::uint16_t opt1 = 1 << 1;
	constexpr std::uint16_t opt2 = 1 << 2;
	constexpr std::uint16_t opt3 = 1 << 3;
	constexpr std::uint16_t opt4 = 1 << 4;
	constexpr std::uint16_t opt5 = 1 << 5;
	constexpr std::uint16_t opt6 = 1 << 6;
	constexpr std::uint16_t opt7 = 1 << 7;
	constexpr std::uint16_t opt8 = 1 << 8;
	constexpr std::uint16_t opt9 = 1 << 9;
	constexpr std::uint16_t opt10 = 1 << 10;
	constexpr std::uint16_t opt11 = 1 << 11;
	constexpr std::uint16_t opt12 = 1 << 12;
	constexpr std::uint16_t opt13 = 1 << 13;
	constexpr std::uint16_t opt14 = 1 << 14;
	constexpr std::uint16_t opt15 = 1 << 15;
	constexpr std::uint16_t opt16 = 1 << 16;
}

void myfuncBit(std::uint16_t);
void myfuncBool(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool,
	bool, bool, bool, bool, bool);
// Mikham 1 done Function besazam
// Ba 16 Parameter Boolean
// Va yeki dige 16 Parameter Bit Manipulation
// Bebinim kodum behine tar hast :)

int main() {

	// Alan bayad 16 ta True ya False bezarim
	// Ham zaman bar hast ham ehtemal eshtebah hast
	// Moshkelat Boolean age dar ye project Bozorg
	// Injuri 16 ya hata 60 Parameter dashtim
	// Ma mikhaym 7 ta True dashte bashim
	// opt1 , opt3 , opt4 , opt7, opt9 ,opt10, opt13
	// Faghat ina mikhaym true bashe
	myfuncBool(true, false, true, true, false, false, true, false, true, true,
		false, false,true, false, true, false);


	// Dige false ina nemizarim onayi ke mikhaym true bashe minevisim
	// Baghiye khodeshon False ya hamon 0 hastand dige
	std::uint16_t option{}; 
	option |= (mask::opt1 | mask::opt3 | mask::opt4 | mask::opt7 | mask::opt9
		| mask::opt10 | mask::opt13);

	myfuncBit(option);


	return 0;
}
void myfuncBool(bool opt1, bool opt2, bool opt3, bool opt4, bool opt5,
	bool opt6, bool opt7, bool opt8, bool opt9, bool opt10, bool opt11,
	bool opt12, bool opt13, bool opt14, bool opt15, bool opt16)
{
	/*
	Boolean 1Byte hast
	Alan 16ta Boolean Parameter darim
	Ke mishe 16Byte
	*/
	std::cout << "Boolean Option1: " << opt1 << '\n';
	return;
}

void myfuncBit(std::uint16_t Options) {
	std::cout << "Bit Manipulation: "
		<< ((Options & (mask::opt1 | mask::opt3 | mask::opt4 |
	mask::opt7 | mask::opt9| mask::opt10 | mask::opt13)) ? "ON\n" : "OFF\n");
	return;
}
