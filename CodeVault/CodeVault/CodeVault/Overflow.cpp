#include <iostream>

int main() {

	unsigned short x = 65535;
	std::cout << "Number was in: " << x << "\n";
	x = 65536; // Ravesh goftam chera 0 neshun mide payin
	std::cout << "In now is: " << x << "\n";
	x = 65537; // Ravesh goftam chera 1 neshun mide payin
	std::cout << "In now is: " << x << "\n";
	x = 65538; // Ravesh goftam chera 2 neshun mide payin
	std::cout << "In now is: " << x << "\n";

	std::cout << 65536 % 65536 << "\n"; // mantegh ine 0
	std::cout << 65537 % 65536 << "\n"; // ***** 1
	std::cout << 65538 % 65536 << "\n"; // ***** 2
	return 0;


}