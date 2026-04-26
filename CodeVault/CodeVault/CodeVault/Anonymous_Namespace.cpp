// Zaban C++ az 2 noe namespace dige ham support mikone:
// (unamed OR anonymous) va yeki dige inline hast
#include <iostream>

// Anonymous:
// Khob engar dari toye Global be in function
// Dast rasi peyda mikoni pas che dardi mikhore?
// Khasiyat asli in anonymous namespace ha ine ke
// Internal Linkage hastand: Ya'ni faghat dar file ke ta'rif shodan
// Dar dast ras hastand
// Mesl in mimune
// static void foo() { return; };
// Be jaye inke hamaro static konim mindazim anonymouse namespace
// Rahat tar hast
namespace 
{
	void foo() {
		std::cout << "V1\n";
	}
}

int main() {

	foo();

	return 0;
}
