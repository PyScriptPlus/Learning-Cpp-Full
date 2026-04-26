#include <iostream>
#include <iomanip>


int main() {

	std::cout << std::setprecision(11);
	std::cout << typeid(5).name() << "\n";
	std::cout << typeid(5.24).name() << "\n";
	std::cout << typeid(5.14f).name() << "\n";
	std::cout << 141.25454785;
	return 0;

}