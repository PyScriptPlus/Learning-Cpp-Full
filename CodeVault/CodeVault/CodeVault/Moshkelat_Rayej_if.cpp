#include <iostream>

int main() {

	// Moshkel avval: Dangling else (Kenaye be belataklifi)
	// Mesal: dar if haye nested (To dar to)
	if (true)
		if (true)
			;
	else
		;
	
	// Dar compiler haye modern dige in Warning okey shode
	// Faghat dar clang++ mide
	// Warning: add explicit braces to a void dangling else
	// Chera in warn mide? Chon code bala mobham hast
	// On else bela taklif hast ma'lom nist male kodum if hast
	// Jolo ya aghab bordan else ta'siri nemizare
	// Rah hal estefade az Block hamun Brace


	// Yeki am Assignment hast:
	// Vaghti eshtebah mikoni be jaye Equal miay Assignment 
	// Mizari: Hamishe World ejra mishe
	// Chon karbar adad ro vared mikone
	// Ba'ad toye dakhel parantez be jaye equal omadim
	// Assignment estefade kardim on 0 rikhte mishe darun x
	// x mishe 0 va 0 ham false hast baraye hamin
	// Hamishe World ejra mishe chon False hast
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	if (x = 0)
		std::cout << "Hello\n";
	else
		std::cout << "World\n";

	return 0;
}