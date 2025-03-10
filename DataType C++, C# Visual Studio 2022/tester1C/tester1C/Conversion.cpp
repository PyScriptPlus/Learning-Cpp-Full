#include <iostream>

// Conversion
// 2 نوع Conversion darim:
// 1-Implicit ضمنی
// 2-Explicit مستقیم یا صریح

// Dar in jalase mikham az Implicit sohbat konim:

//Mesal:

void print(double x) {
	
	std::cout << x;
	return;

}

void print1(int x) {

	std::cout << x;
	return;

}

int main() {

	// Implicit:
	print(5); // safe
	std::cout << '\n';
	// Tabdil int be double

	print1(4.6); // unsafe
	// Tabdil double be int = Warning mide
	// Chon output 4 e on chizi nis ke ma bekhaym
	// Bakhshi az etelaate ma az beyn mire
	// Yeki az moshkelat Implicit dar inja hast unsafe
	// Vali dar tabdil int be double safe bod
	// Rah hal estefade az Explicit صریح

	std::cout << '\n';

	// Nokte:

	float es{ 5.6 }; // Vaghti az Uniform Initialization estefade mishe
	// Chap nemikone mostaghim error va warning

	int em{ es };
	std::cout << em;
	return 0;

}