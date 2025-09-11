// Yek seri maghadir hastand ke taghir nemikonanad
// Mesl adad Pi, Avogadro, Gravity va ....
// Baraye injur magahdir az Constant estefade mishe 
// Hala bahs asli ine ke khob nist inaro biaym dar har file
// Ke niyaz darim ta'rif konim
// Kolan dar barname Tekrar baraye ma jazab nist :D
// Hala rah hal chiye?
// Rah hal ine ke meghdar mored nazar dar yekjaye sabet ta'rif konim
// Ba'ad dar har ja lazem bod az in maghadir estefade konim

// Zaban C++ rah kar hayi baraye in kar gozashte ke ma
// Har ravesh migim 
// Ravesh avval ke mikham begam kheyli estefade mikonim
// Ta'rif dar HeaderFile hast
// Berim mesal ro bebinim:

#include <iostream>
#include "Constants.hpp"

int main() {
	
	//-------------------------------//
	std::cout << "Enter a radius: ";
	double radius;
	std::cin >> radius;

	std::cout << "The circumference is: "
		<< 2.0 * radius * constants::pi << '\n';
	//-------------------------------//


	return 0;
}


