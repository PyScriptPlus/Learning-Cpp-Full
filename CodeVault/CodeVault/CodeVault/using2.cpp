// Yek mesal dige am bezanam dar mored Collision Name
// Dar namespace ha age using estefade konim!!

#include <iostream>

namespace a {
	int x = 50;
}
namespace b {
	int x = 1;
}

int main() {
	/*
	using namespace a;
	using namespace b;
	std::cout << x << '\n'; // Compiler gij mishe injuri
	// Nemidune kodum x mikhay 
	*/
	// 2 Ta rah hal daram:
	// 1: Estefade az Scope Resolution Operator
	std::cout << a::x << '\n';
	std::cout << b::x << '\n';

	// 2: Estefade joda gane dar Scope haye jodagane
	// Ba Using Declaration
	using a::x;
	std::cout << x << '\n';
	{
		using b::x;
		std::cout << x << '\n';
	}

	return 0;
}