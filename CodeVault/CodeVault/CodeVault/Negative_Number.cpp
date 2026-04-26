// Mikhaym bebinim in adad Binary chejuri dar hafeze zakhire mishan
// Va chejuri mishe be dast ovard
// Bayad az Ravesh ( Two's Complement ) estefade konim
// Khob age Type mored nazar Alamat dar bod ya'ni Signed bod
// Be samt chap tarin bit negah mikonim samt MSB age 0 bod Mosbat hast
// Age samt chap tarin bit hamon samt MSB 1 bod Manfi hast
// Hala Mesal:
// signed int = 0b0000'0101 --> +5 hast
// Hala manfi sho bekhaym be dast biyaram 3 ta Marhale dare:
// 1- Avval Binary on adad mored nazar minevisim sade yani 1 nemizarim
// Hamon Mosbat minevisim mesal adad 5 ke mishe 00000101
// 2- Ba'ad miaym hameye on Bit haro Ma'kos mikonim yani Bitwise NOT ~
// Ke mishe: 1111'1010
// 3- Hala miaym be in adad 1 Vahed ezafe mikonim ke neveshtam to project 
// Adding_in_Binary.cpp chejuri mishe Binary haro jam' kard
// 1111'1010
// 0000'0001
// 1111'1011 --> -5

// Mikhay codesho benevisim bebini ke mishe -5 dar Type signed
#include <iostream>
#include <cstdint>

int main() {

	std::uint8_t five = 0b0000'0101;
	five = ~five;
	std::uint8_t fiveOne = (five + 0b0000'0001);
	std::int8_t convert = static_cast<std::int8_t>(fiveOne);
	std::cout << "Result: " << static_cast<int>(convert) << '\n';
	// Tabdil kardam be int chon mikham dorust chap she toye int8 
	// Goftim ghablan dige moshkelati hast
	
	// Binary sho mostaghim ham neveshtam bebini ke -5 mishe
	// :)
	std::int8_t convert2 = static_cast<std::int8_t>(0b1111'1011);
	std::cout << "Result2: " << static_cast<int>(convert2) << '\n';
	return 0;
}

// Hala chejuri mesal in Binary ro be ma dadan hamin Binary -5: 
// Ma nemidunim -5 hast 1111'1011
// Migan tabdil kon be Decimal bebin chand miad signed hast: 1111'1011
// Avval negah mikonim be samt chap tarin bit mibinim 1 hast
// Pas in adad manfi hast
// Hala miaym ino 1111'1011 Ma'kos mikonim Bitwise NOT
//      1111'1011
// NOT: 0000'0100

// Shod in: 0000'0100
// Hala bayad behesh 1 Vahed ezafe konim:
//		   0000'0100
// 1Vahed: 0000'0001
// Result: 0000'0101 --> 5
// Mishe 5 chon on avval samt chap tarin bit 1 bod manfi mizarim mishe ( -5 )
