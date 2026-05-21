// Dar mored Random Number ha kami bahs mikonam
// Tozihat kamel in bahs va digar mabhas ha 
// Toye daftar ya vscode
// Random Number be che dardi mikhore? Dar bazi ha,
// Ai, Blockchain, Encryption, va ...

// Donyaye Computer ha 0 , 1 hast zatan turi tarahi shodan
// Ke natayej ghabel pish bini ast
// Pas Computer ha ghader be tolid Random Number nist
// Hich system i dar donya vojud nadard ke 
// Number random tolid kone

// Hameye barname hayi ke baraye tolid random number
// Neveshte shodan be no'e (Pseudo Random) hast

// Algorithm hayi ke baraye Generate Random Number
// Neveshte mishan hamashun (deterministic) hastand
// Ya'ni agar vorudi yeksan bashe khoruji hamun hast
// Taghiri nemikone khoruji

// Yedune Algorithm:
// Pseudo Random Number Generate
// Minevisam bebin mesal payin: Algorithm ma'rof (LCG):
// (Linear Congruential Generator) | (LCG)

#include <iostream>


unsigned int LCG() {
	static unsigned int s_state = 5323;
	s_state = (8253729 * s_state) + 2396403;

	return (s_state % 32768);
}

int main() {

	for (int i = 1; i <= 100; ++i)
	{
		std::cout << LCG() << '\t';
		if (i % 10 == 0)
			std::cout << '\n';
	}

	return 0;
}