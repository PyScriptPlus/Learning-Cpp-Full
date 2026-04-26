#include <iostream>
#include <iomanip>

int main() {

	double x = 100.0 - 99.99;
	double y = 10.0 - 9.99;
	
	std::cout << x << '\n'; // Output --> 0.01
	std::cout << y << '\n';	// Output --> 0.01
	// Output ha yeki an vali !!
	
	// Miaym az if estefade konim ba Relational_Operator: Equal to
	// Mibinim mosavi nistand 
	// Dalil?
	std::cout << std::setprecision(18);
	std::cout << x << '\n' << y << '\n'; // Adad haro negah xD
	// x az y bozorg tar hast
	if (x == y)
	{
		std::cout << "x is Equal to y" << '\n';
	}
	else
	{
		std::cout << "x is NOT Equal to y" << '\n';
	}
	if (x > y)
	{
		std::cout << "x is Greather Than y" << '\n';
	}

	/*
		Moshkel chiye ?
		Dar fasl haye ghabl goftim ke chera injurie
		In miad nazdik tarin adad ro be 0.01 zakhire mikone
		Kheyli nazdik behesh malom nemishe 
		Baraye didan fargh beyneshon bayad az setprecision()
		Hamishe dar estefade az Floating Point deghat kon
		Moshkelat bozorgi dar project haye bozorg miyare
		Makhsosan: ( Havafaza )
	*/


	return 0;
}