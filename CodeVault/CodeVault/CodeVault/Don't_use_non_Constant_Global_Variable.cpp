// Tosiye: Az Global Variable haye gheyr constant
// Estefade nakon
// Chera? Kheyli az barname nevis haye C++ baraye rahati
// Mian az Global Variable estefade mikonanad
// Chon dar hameja dar dast ras hast
// Va dast rasi behesh kheyli rahate
// Hala chera migam estefade nakon
// Emkan in hast barname dar ayande makhsusan project haye bozorg
// Be moshkel bekhore!!!
// Emkan in hast dar yek Function ke ma nemidunim
// Omade dast kari shode!!!
// Mesal:

#include <iostream>

int g_x;

int doSomething(int x, int y) {
	g_x = x;
	return x + y;
}

bool isEqual() 
{
	g_x = 1;
	return g_x == 1;
}

void printHello() {
	g_x = 9;
	isEqual();
	if (g_x == 9) {
		std::cout << "Hello World!" << '\n';
	}
	else
	{
		std::cout << "Error!!!" << '\n';
	}
	return;
}

int main() {

	g_x = 20;

	doSomething(50, 2);

	// In Condition mishe false va
	// Moshak haye hasteyi partab mishan
	// Ma ke goftim 20 chera bayad false beshe?
	// Chon tabe' doSomething() karesho karde :)
	if (g_x == 20) 
	{
		std::cout << "No thread detected." << '\n';
	}
	else
	{
		std::cout << "Launching nuclear missiles...." << '\n';
	}


	printHello();

	// Hala be joz in mesal hayi ke zadam
	// Ghabeliyat Modularity bodan Project ham az dast midim
	// Modularity goftam dige mitunim barname be chand bakhsh
	// Beshkonim mesal input gerftan ro dar yek Function joda benevisim
	// Hala age khastim on function dast kari konim
	// Bayad Global Variable ham dast kari shavad dige
	// Hala ma'lom nist on Global Variable chand ja estefade shode
	// Miad kol barname mirize be ham
	// Sazmandehi nemishe kard Project ro
	// Va ghabeliyat mofid Modularity ham az dast mire!!!

	return 0;
}