// Baraye Internal kardan yek Global Variable bayad az keyword
// static estefade konim:

// Internal Linkage
static int g_x = 3;
static const int g_y = 4;
// const int g_y = 4; // Farghi nadare
static constexpr int g_z = 5;
// constexpr int g_z = 5; // Farghi nadare

//------------------------------------------------------//

// Hala Function ham mitune daraye Internal Linkage bashe
// Goftim dige Identifier ha 
// Pas Function ham shamel mishe
#include <iostream>
static void printHello()
{
	std::cout << "Hello World!" << '\n';
	return;
}