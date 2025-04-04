#include <iostream>
// Binary_Arithmetic ham 2 ta amalvand dare 
// Yeki samt chap yeki samt rast
// 5 ta operator vojud dare dar in Binary
// Operators: 
// 1- Addition --> +
// 2- Subtraction --> -
// 3- Multiplication --> *
// 4- Division --> /
// 5- Modulus(Remainder) --> %

// Inaro baladim mesal:
// x + y
// x - y 
// Rahate vali ye taghsim mikham tozih bedam mimune Modulus ke dar mabhas baadi migam

//-----------------------------------------------------------------//
// Age dar taghsim 
// floating / floating bashe result ham floating point hast
// floating / integer bashe baz ham result floating point hast
// integer / floating bashe baz ham result floating point hast

// Hala age 2 tasham integer bashe
// result integer hast
// Berim ba mesal begim ye seri moshkelat ham dare

int main() {

	double x = 7;
	double y = 4;
	int z = 4;
	int zyx = 7;
	
	std::cout << "Har 2 ta floating-point: " << x / y << '\n';
	std::cout << "Samt chap floating-point faghat: " << x / z << '\n';
	std::cout << "Samt rast floating-point faghat: " << zyx / y << '\n';

	// Har 2 ta integer bashe bebin chi mishe: 
	
	std::cout << "Har 2 ta integer: " << zyx / z << '\n';
	// Output 1 dad dorust nist .75 az beyn mire 
	// Age majbur budim integer taghsim konim chi?
	// Type Conversion estefade kon
	// Mesal:

	// Har 3 ta yekie mishe
	std::cout << "Type Conversion: " << static_cast<double>(zyx) / z << '\n';
	std::cout << "Type Conversion: " << zyx / static_cast<double>(z) << '\n';
	std::cout << "Type Conversion: " << static_cast<double>(zyx) / static_cast<double>(z) << '\n';

	//-----------------------------------------------------------------//

	// Nokte mohem:
	// Hichvaght nazar dar barnamat ye adad integer taghsim bar 0 she
	// Result haye mokhtalef ham dar CompileTime va RunTime
	// Mesal:
	/* 
	Compiler MSVC nemizare Error mide xDDD :
	Error: divide or mod by zero
	Toye vs code mishe
	std::cout << "Ye adad namalom: " << 10 / 0 << '\n';
	*/

	// Inam test konim dar RunTime:
	// 0 Bazam nemizare
	// Mishe ba if jamesh kard nazarim 0 bezane karbar 
	// Dige code if neminevisam
	std::cout << "\nEnter your Number: ";
	int user;
	std::cin >> user;
	std::cout << "10 / " << user << " = " << 10 / user << '\n';

	return 0;
}