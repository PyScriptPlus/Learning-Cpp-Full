// Ravesh ba'adi chiye?
// Bayad hamon meghdar hayi ke dar ravesh avval
// Ta'rif karde budim ro External konim
// Vali dar SourceFile ta'rif mikonim inaro
// Toye Constants2.hpp
// Chera? Baraye inke motavajeh shim Definition in maghadir
// Faghat dar yekja vojud dare
// Ba'ad biaym Forward Declaration hashon ro dar HeaderFile gharar
// Bedim !!!

// Nokte: Dar in ravesh dige nemishe constexpr estefade kard
// Bejaye on az const estefade mikonim 
// Chon constexpr ghabeliyat Forward Declaration nadarad!!!
// Mesal:

#include <iostream>
#include "Constants2.hpp"

int main() {

	std::cout << "Enter a radius: ";
	double radius;
	std::cin >> radius;

	std::cout << "The circumference is: " <<
		2.0 * radius * constants::pi << '\n';

	return 0;
}