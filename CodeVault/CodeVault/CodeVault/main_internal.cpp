// Ma dar bahs Linkage 2 ta Linkage darim:
// 1- Internal Linkage
// 2- External Linkage
// Emruz be bahs Internal mipardazim
// Internal Linkage: Age Identifier ke daraye Internal Linkage
// Bashe faghat dar file ke ta'rif shode ghabel estefade va 
// Dar dast ras hast va dar file dige nemishe az on Identifier 
// Estefade kard
// Hala Global Variable ha daraye Internal Linkage ham External Linkage
// Hastand
// Mesal:
// Inam begam Constant ha be sorat Default Internal hastand

#include <iostream>

// Code haye ina dar a.cpp ba tozihat
extern int g_x;
extern const int g_y;
/*
extern constexpr int g_z; 
// In ke Compile-Time hast haminja error mide
// Nemizare estefade konim
*/

// Code haye inam dar a.cpp ba tozihat
void printHello();

int main() {

	std::cout << g_x << '\n' << g_y << '\n'; // Error
	printHello(); // Error

	return 0;
}