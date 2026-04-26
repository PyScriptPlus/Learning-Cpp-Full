// Hala External Linkage:
// Dar inam Identifier mitune dar jayi ke ta'rif shode
// Dar dast ras va ghabel estefade bashe 
// Va dar file haye dige mishe estefade kard
// Code hayi ke dar external.cpp neveshtam ba tozihat bebin!!

#include <iostream>

// Hala baraye estefade az Global Variable haye daraye External
// Bayad mesl Function ha Forward Declaration gharar bedim
// Onam ba Keyword extern anjam mishe
// Ta inja Keyword extern 2 ta karbord dasht pas?
// 1- External kardan Identifier
// 2- Forward Declaration kardan Identifier
// Mesal:

extern int g_x; // Forward Declaration
extern int g_y; // Forward Declaration
extern const int g_z; // Forward Declaration
extern const int g_i; // Forward Declaration
// Constexpr bedon meghdar dahi avvali nemishe error mide
// Majbur shodim dar Declare kardan const konim inja
// Vali onja constexpr hast

bool isEqual(bool x, bool y); // Forward Declaration

int main() {

	g_x = -99;
	std::cout << "Num1: " << (--g_x) << '\n';
	std::cout << "Num2: " << g_y << '\n';


	std::cout << "Num3: " << g_z << '\n'; 
	// Const hast nemishe meghdaresho avaz kard!

	std::cout << "Num4: " << g_i << '\n';
	// Const hast nemishe meghdaresho avaz kard!

	std::cout << std::boolalpha;
	std::cout << "24 == 1: " << isEqual(24, 1) << '\n';

	return 0;
}

