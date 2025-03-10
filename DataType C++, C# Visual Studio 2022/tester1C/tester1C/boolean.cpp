#include <iostream>


int main() {

	bool i;
	i = true;
	bool x = false;
	const bool y = true;
	bool e = !true;
	bool w = !x;
	// Adad 0 va -0 false be joz adad 0 hame chi true mishe
	bool s = 0; // fasle
	bool ss = -0; // false
	bool a = 1; // Be joz adad 0 va -0 harchi bedi mishe true
	bool aa = 6; // true

	std::cout << i << "\t" << x << "\t" << y << "\t" << e << "\t" << w << "\t" << s << "\t" << ss << "\t" << a << "\t" << aa;
	std::cout << "\n";
	std::cout << std::boolalpha;
	std::cout << i << "\t" << x << "\t" << y << "\t" << e << "\t" << w << "\t" << s << "\t" << ss << "\t" << a << "\t" << aa;
	std::cout << "\n";
	std::cout << std::noboolalpha;
	std::cout << i << "\t" << x << "\t" << y << "\t" << e << "\t" << w << "\t" << s << "\t" << ss << "\t" << a << "\t" << aa;

	//************************************************************************

	std::cout << "\n" << "\n" << "\n";
	std::cout << std::boolalpha;
	bool mmd; 
	std::cout << "Vared kon: ";
	std::cin >> mmd;
	std::cout << "You entered: " << mmd << "\n";

	//************************************************************************\

	std::cout << "\n" << "\n" << "\n";
	std::cout << std::boolalpha;
	std::cin >> std::boolalpha;
	bool san;
	std::cout << "Vared kon dobare: ";
	std::cin >> san;
	std::cout << "Natije: " << san << "\n";
	


	return 0;
	 

}






