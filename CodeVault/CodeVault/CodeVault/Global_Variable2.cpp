// Global Variable ha bar khalaf Local Variable ha
// be surat Default Zero-Initialized hastand
// Ya'ni be age meghdar nadim
// Meghdar Defaultesh 0 hast 

#include <iostream>

int g_x;

// Global Variable ha ham mitunan Constant bashand
// Vali meghdar dahi avvalie bayad beshe kheyli moheme
// Mesal:
// const int g_num1; // Error
// constexpr int g_num2; // Error
// Vali injuri error nemide meghdar 0 mide mesal:
const int g_num3{};
constexpr int g_num4{};

const int g_num5 = 1;
constexpr int g_num6 = 2;


int main() {

	// Default-Initialization:
	std::cout << "Zero-Initialized: " << g_x << '\n';

	//----------------------------------//
	std::cout << "Uniform-Initialization: " << g_num3 << '\n';
	std::cout << "Uniform-Initialization: " << g_num4 << '\n';

	//----------------------------------//
	std::cout << "Copy-Initialization: " << g_num5 << '\n';
	std::cout << "Copy-Initialization: " << g_num6 << '\n';

	return 0;
}