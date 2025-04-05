#include <iostream>
#include <cmath>

// Dar zaban C++ va C va ye seri zaban haye dige
// Chizi injuri tavan nadarim 2 ^ 3 yani 2 be tavan 3
// Pas chejuri az Exponent estefade konim dar zaban C++ va C
// Dar zaban C 
// Estefade az Library <math.h> ba function pow(2, 3);
// Dar zaban C++
// Estefade az Library <cmath>
// Ba function std::pow(2, 3) || pow(2, 3);

int main() {

	double exponent = std::pow(2, 3);
	std::cout << "Exponent: " << exponent << '\n';
	std::cout << "Exponent: " << std::pow(6, 4) << '\n';
	std::cout << "Exponent: " << pow(2, 2) << '\n';

	// std::pow() ham okeye (Dar C++ bishtar tosiye mishe)
	// pow() ham okeye

	return 0;
}