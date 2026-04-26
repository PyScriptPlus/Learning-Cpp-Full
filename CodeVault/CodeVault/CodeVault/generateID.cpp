// Mikham ID besazim ba Static Local Variable ke yad gerftim

#include <iostream>

int generateID() {
	static int s_itemID = 0;
	return s_itemID++;
}

int main() {

	while(true) {
		std::cout << generateID() << '\n';
	}

	return 0;
}