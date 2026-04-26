// Hala inline namespace ha be che dardi mikhoran?
// Baraye version bandi function ha ziad be dard mikhore
// Be jaye copy kardan V1, V2 miaym az inline namespace 
// Estefade mikonim !!!
// Inam begam ina dige mesl Anonymous daraye Internal Linkage nistand
// Mesal:

#include <iostream>

inline namespace V1 {
	int foo(int x) {
		return x;
	}
}
namespace V2 {
	int foo(int x) {
		return x;
	}
}

int main() {

	int versionOne = V1::foo(NULL);
	int versionTwo = V2::foo(NULL);

	// Ini ke Unqualified Name hast miyad namespace ke
	// Ghablesh inline zadim dar nazar gerfte mishe !!!
	int unqualified = foo(NULL);

	return 0;
}

// Mored akhar jahat yad giri:
/*
namespace 
{
	// Pedar in Global namespace hast
}

namespace A 
{
	// Pedar inam Global namespace hast
}

namespace A
{	// Pedar inam Global namespace hast
	namespace B
	{
		// Pedar in namespace A hast
	}
}
*/