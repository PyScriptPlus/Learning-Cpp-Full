// Mikham ID besazim ba Static Local Variable ke yad gerftim

#include <iostream>

int generateID() {
	static int itemID = 0;
	return itemID++;
}

int main() {

	while(true) {
		std::cout << generateID() << '\n';
	}

	return 0;
}