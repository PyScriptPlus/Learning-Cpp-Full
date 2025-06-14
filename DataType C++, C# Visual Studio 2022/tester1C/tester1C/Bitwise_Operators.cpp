#include <iostream>
#include <bitset>

int main() {

	// 6 Ta Bitwise Operator in bahs Bit Manipulation ha darim:
	// 1-Left Shift  <<   x << y // Binary
	// 2-Right Shift >>   x >> y // Binary
	// 3-Bitwise NOT ~      ~x   // Unary
	// 4-Bitwise AND &    x & y  // Binary
	// 5-Bitwise OR  |    x | y  // Binary
	// 6-Bitwise XOR ^    x ^ y  // Binary

	// Avval berim soragh Left Shift:
	// Baraye mesal 2 ta amalvand dare:
	// Operand samt chap << Operand samt rast
	// Operand samt chap: on 0 ya 1 hayi hast ke gharar migire
	// Operand samt rast: On meghdari ke mikhaym shift bedim be samt chap ya rast

	std::bitset<4> left = 0b0011;

	std::cout << "Left: " << (left << 1) << '\n'; // Output --> 0110
	std::cout << "Left: " << (left << 2) << '\n'; // Output --> 1100
	std::cout << "Left: " << (left << 3) << '\n'; // Output --> 1000
	// Dar in code balayi chera output 1000 shod ma 3 ta shift dadim
	// Be samt chap yeki az bit haye 1 oftad birun baraye hamishe az beyn mire
	// Magar tedad bit ziad koni :)
	
	std::bitset<4> right = 0b1100;

	std::cout << "Right: " << (right >> 1) << '\n'; // Output --> 0110
	std::cout << "Right: " << (right >> 2) << '\n'; // Output --> 0011
	std::cout << "Right: " << (right >> 3) << '\n'; // Output --> 0001
	// In code am mesl balayi shift dadim be samt rast yeki az bit ha oftade birun
	// Baraye hamishe az beyn mire magar tedad bit mored nazar bishtar konim

	std::bitset<4> mybits = 0b1100;

	std::cout << (mybits >> 1) << '\n'; // Output --> 0110
	std::cout << (mybits << 1) << '\n'; // Output --> 1000
	// Shayad so'ali pish miad ke chera avval be samt Rast Shift dadim
	// Ba'ad ke be samt Chap Shift dadim magar nabayd bar migasht
	// Mesl meghdar avval mishod injuri: 1100
	// Khob baraye inke meghdar asli mybits dast nemikhore
	// Yek meghdar jadid tolid mishe va bazgasht dade mishe

	
	// Berim soragh Bitwise NOT: ~
	// Miad Bit hayi ke 0 hast ro 1 mikone
	// Va Bit hayi ke 1 hast ro 0 mikone
	// Deghat kon tedad bit ziad nabashe age ziad bashe
	// Miad az samt MSB ye alame 000000 ya 11111 mizae

	// Injuri am mishe nevesht
	std::cout << "Bitwise NOT: " << ~std::bitset<4>(0b1010) << '\n';
	// Output --> 0101

	std::bitset<8> NOT = 0b0010;
	std::cout << "Deghat kon soti nadi: " << ~NOT << '\n';
	// Meghdar bit age ziad bashe injuri mishe deghat kon soti nadi :)

	return 0;
}