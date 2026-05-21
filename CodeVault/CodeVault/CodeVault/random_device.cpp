#include <iostream>
#include <random>

// Random device chiye? 
// Yek (Non-deterministic random number generator)
// In az Algorithm estefade nemikone baraye tolid random number
// Hadaf in tolid adad haye ast ke ta had momken az 
// Manabe' vagheyi tasadof dar system gerfte shavad.
// Mesl mt19937 ba Algorithm haye riyazi kar nemikonad
// Tozihat ziad s6.cpp ya daftar

int main() {

	std::random_device rnd;
	std::uniform_int_distribution<int> dist{ 1,6 };
	unsigned int randomNumber = dist(rnd);
	std::cout << randomNumber << '\n';

	// In age adadesh 0 bashe natije ro mishe pishbini kard
	// Vali age adad ziad bashe balaye 0 ya'ni az manabe' system 
	// Baraye Generate Random Number estefade mikone
	std::cout << rnd.entropy() << '\n'; 

	// Mitunim yek kar khafan ham konim in random_device be onvan Seed bedim be
	// Algorithm Mersenne Twister in behtare 
	// Mesal:
	std::random_device seed;
	std::mt19937 mt{seed()};
	std::cout << dist(mt) << '\n';


	return 0;
}