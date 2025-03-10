#include <iostream>
#include <cstdint>
#include <cmath>

int main() {

	//std::cout << sizeof(int16_t) << "\n";
	//uint16_t i;
	//std::cout << pow(-2, 16 - 1);
	

	std::cout << sizeof(std::int_fast8_t) * 8 << "\n";
	std::cout << sizeof(std::int_fast16_t) * 8 << "\n";
	std::cout << sizeof(std::int_fast32_t) * 8 << "\n";
	std::cout << sizeof(std::int_fast64_t) * 8 << "\n";
	std::cout << sizeof(std::int_fast16_t);
	return 0;

}