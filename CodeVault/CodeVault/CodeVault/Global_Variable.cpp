// Be Variable hayi ke kharej az Function Define mishan
// Migim Global Variable
// Yek ghavaedi hast ke Global Variable ha bayad ba'ad 
// Preprocessor haye #include ta'rif beshan intori behtare
// Va yek nokte ke ghadimi kar haye C++ 
// Dar namgozari Variable ha ghabl esm asli yek
// g_ mizaran mesal: g_number, g_age, g_cpuCore
// Baraye khanayi kheyli komak mikone
// Va dar har Function in Global Variable ha dast ras hastand
// Mishe estefade kard mesal:

// 3 Property in Global Variable:
// 1-Scope: Global namespace scope, Global Scope, File Scope
// 2-Duration: Static Duration
// 3-Linkage: Internal Linkage, External Linkage

// Scope: Ta az noghte ke Global Variable ta'rif mishe ta 
// Payan in file ya in barname dar dast ras hast
// Duration: Az noghteyi ke ta'rif mishe ijad mishe
// Va ba'ad az tamam shodan barname az beyn mire
// Linkage: Jalase haye ba'adi migam

#include <iostream>

int g_x = 5;

void doSomething() {
	std::cout << "Number is: " << g_x << '\n';
	return;
}

int main() {

	doSomething();

	g_x = 0;
	std::cout << "Number is: " << g_x << '\n';


	return 0;
}

