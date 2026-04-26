// In raveshi ke mikham begam az 2 ravesh ghabli behtare
// Vali bayad hadaghal Standard C++17 be ba'ad bashim
// Dar C++17 omadan yek mafhumi be name ( inline ) moa'refi
// Kardan hala in inline Variable chiye?
// Variable i hast ke ejaze dare dar chandin file define beshe bedon
// Inke ghaede One Definition Rule ro naghz kone
// Nokte: inline Global Variable ha be sorat Default
// Daraye External Linkage hastand

// Hala yek seri mavaredi az posht pardeye in inline mikham begam
// Deghat kon:
// Chi ba'es mishe ghavanin ODR naghz nashe?
// Linker miyad hameye Definition haye marbot be yek Variable 
// Ro tanha daron yek Variable jam' mikone
// Ya'ni vaghti in inline gharar midim
// Be Compiler migim momkene in Variable ke ta'rif kardim
// Dar chandin file tekrar shode bashe 
// Vali hamashon yek Variable vahed hesab kon
// Ya'ni hamaro yeki hesab mikone
// Linke dige onaro jodagone nemibine hamashon yeki mibine

// Mored ba'adi:
// inline ghavanin darad: vaghti inline Variable ta'rif mikonim
// Bayad Translation Unit (TU) definition on inline Variable bebine
// Vagarne error!!!
// TU yek bar goftam ke donbal Preprocessor ha migarde 
// Age inline ke ta'rif kardim dar HeaderFile bashe mibine
// Ya age toye khod file asli ke mikhaym ejra konim ham bashe
// Ba'ad Preprocessor ha be komak Compiler definition on inline
// Ro mibine vali age on inline Variable az yek file dige
// Manzuram Source code hast ke ta'rif karde bashim 
// Biyarim dar Source asli Forward Decalaration konim ba'ad
// Estefade konim kafi nist
// TU hatman bayad Definition on inline Variable ro bebine!!!
// Dar gheyr in sorat error:
// odr-used inline Variable 'Identifier' is not define

// Mohem: Hatman inline Variable hato dar HeaderFile define kon
// HeaderFile behtare!!!
// Nokte: inline Variable ha khasiyat Constexpr ham darand
// Mitunim azash estefade konim!!!

// Mesal:
#include <iostream>
#include "Constants3.hpp"

int main() {

	std::cout << "Enter a radius: ";
	double radius;
	std::cin >> radius;

	std::cout << "The circumference is: " <<
		2.0 * radius * constants::pi << '\n';

	return 0;
}
