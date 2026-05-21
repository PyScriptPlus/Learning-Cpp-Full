#include <iostream>
#include <random>
#include <iomanip>
#include <chrono>

// Mikham yek seri az distribution haye mohem inja benevisam

int main() {

	std::mt19937 mt{
		static_cast<unsigned int>
		(std::chrono::steady_clock::now().time_since_epoch().count())};

	// Integer:
	std::uniform_int_distribution<int> dist{ 0,9 };


	// Floating-Point:
	std::uniform_real_distribution<double> dist2{ 1.0,2.6 };
	for (int i = 1; i <= 10; i++)
	{
		std::cout << std::setprecision(3) << dist2(mt) << '\t';
		if (i % 5 == 0)
			std::cout << '\n';
	}

	std::cout << "\n\n\n\n\n\n";

	// Boolean:
	std::bernoulli_distribution bools;
	for (int i = 1; i <= 10; i++)
	{
		std::cout << bools(mt) << '\t';
		if (i % 5 == 0)
			std::cout << '\n';
	}

	return 0;
}