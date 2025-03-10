// Mabhas: Const
// Mafhum const: yani nemishe dige value variable taghir dad ya....
/*
int x = 5;
x = 6;
dige toye const in nemishe
*/


// Zaban C++ az chandin const variable poshtibani mikone 
// Ke gharare yad begirim


// Mesal:

#include <iostream>

void print(const int x);

int main() {

	// Har 2 halat doruste:
	// 1-const Type * in tosiye mishe hame ja in estefade mishe
	// 2-Typt const
	const double gravity = 9.4;
	const int sidesInSquare = 4;
	int const test = 5;
	double const we = 54.5;

	std::cout << gravity << '\n';
	//gravity = 5.6; // Error floating-point sabet hast const
	//const int nan; //Error hatman bayad meghdar dahi avvali she

	//----------------------------------------------------------------------//
	std::cout << '\n';
	print(5); // Chera dar argument injuri mishe har adadi bekhaym bedim
	// Inja meghdar x sabet hast vali ma inja darim
	// Call mikonim function seda mizanim
	// Faghat x nemitune toye scope khodesh taghir kone mesal zadam toye
	// khod void
	std::cout << '\n';	
	print(3);




}

void print(const int x) {

	std::cout << x << '\n';
	// x = 5; // Error !!!!!!!!!!!!!!!!!!!!!!!!!!
	return;
}