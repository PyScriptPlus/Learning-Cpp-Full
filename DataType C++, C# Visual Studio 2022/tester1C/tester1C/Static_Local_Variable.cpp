// Ta inja 2 bar dar mored Static sohbat kardim
// Yeki keyword Static baraye Internal kardan Global Variable ha
// Yeki am Static Duration
// Khob yeki am emruz migam
// Static Local Variable
// Vaghti yek Local Variable ro Static mikonim
// Daraye Static Duration mishe
// Code zir bebin

#include <iostream>

void incrementAndPrint() {
	int x = 1; // Automatic Duration
	x++;
	std::cout << x << '\n';
	return;
} // x is here destroyed

void incrementAndPrint2() {
	static int x = 1; // Static Duration
	// Meghdar ghablisho hefz mikone injuri
	x++;
	std::cout << x << '\n';
	return;
}

int main() {

	incrementAndPrint(); // Output --> 2
	incrementAndPrint(); // Output --> 2
	incrementAndPrint(); // Output --> 2

	std::cout << '\n' << "=========================\n" << '\n';
	//----------------------------------------//
	
	incrementAndPrint2(); // Output --> 2
	incrementAndPrint2(); // Output --> 3
	incrementAndPrint2(); // Output --> 4

	return 0;
} // x is here destroyed