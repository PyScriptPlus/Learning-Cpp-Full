#include <iostream>
// Be in migan Shadowing
// Alan toye in code ye seri Variable ha Variable dige Shadow
// Kardan baraye ete'lat bishtar S5.cpp dar VSCode barresi
// Ya dar Daftar barresi she!!

int KLEVV = 0;

int main() {

	int KLEVV = 5;
	{
		std::cout << KLEVV << '\n';
		int KLEVV = 2;
		KLEVV = 99;
		++KLEVV;
		std::cout << KLEVV << '\n';
	}
	--KLEVV;
	std::cout << KLEVV << '\n';

	++(::KLEVV);
	std::cout << ::KLEVV << '\n';

	return 0;
}