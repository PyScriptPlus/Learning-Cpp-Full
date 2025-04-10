#include <iostream>
// Mabhas: Increment & Decrement
// Increment va Decrement chi hast?
// Increment: Baraye ezafe kardan 1 vahed be Variable
// Decrement: Baraye kam kardan 1 vahed az Variable
// Namadeshon:
// Increment: ++
// Decrement: --
// Ina 2 halat darand:
// Prefix Increment Operator: ++x
// Postfix Increment Operator: x++
// Prefix Decrement Operator: --x
// Postfix Decrement Operator: x--

// Mesal estefade azash:

int main() {
	
	int x = 5;
	int s = x++; // Inja meghdar afzayesh mide
	std::cout <<  "Postfix Increment: " << x << '\n';
	int xz = 5;
	std::cout << "Prefix Increment: " << ++xz << '\n';
	int xy = 5;
	int w = xy--; // Inja meghdar kam mishavad
	int xyz = 5;
	std::cout << "Postfix Decrement: " << xy << '\n';
	std::cout << "Prefix Decrement: " << --xyz << '\n';

	// Fargh Postfix ba Prefix ?
	// Fargheshon
	// Prefix avval meghdar afzayesh miyabad baad estefade mikone
	// Postfix avval estefade mikone baad meghdar afzayesh mide
	// Mesal:

	int num = 6;
	int y = num++; // Postfix
	// Inja avval meghdar 6 mide be Variable y baad meghdar afzayesh miyabad
	std::cout << "Postfix: " << y << '\n'; // Output 6
	std::cout << "Num: " << num << '\n';


	// Hala age az Prefix estefade konim avval meghdar afzayesh miyabad 
	// Baad on meghdar mide be Variabe y

	int num2 = 6;
	y = ++num2;
	std::cout << "Prefix: " << y << '\n';


	// Behtare az Prefix bishtar estefade shavad
	// Vali dar jaye khodesh !!

	return 0;
}