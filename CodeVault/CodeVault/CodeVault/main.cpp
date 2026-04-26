#include <iostream>

// Declare:
namespace foo {
	int doSomething(int x, int y);
}
// Declare:
namespace goo {
	int doSomething(int x, int y);
}

int main() {

	//std::cout << doSomething(4, 3) << '\n'; // Error Duplicate

	// Scope-Resolution-Operator:
	// namespace::Identifier
	// ::Identifier --> Mostaghim Global
	std::cout << foo::doSomething(4, 3) << '\n';
	std::cout << goo::doSomething(4, 3) << '\n';

	return 0;
}