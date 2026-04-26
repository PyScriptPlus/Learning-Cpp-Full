#include <iostream>
#include "boolean_2.h"


int main() {

	std::cout << "Adad avval vared kon: ";
	int x;
	std::cin >> x;
	

	std::cout << "Adad dovvom vared kon: ";
	int y;
	std::cin >> y;

	std::cout << std::boolalpha;
	print(x, y);

	std::cout << "\n" << "\n" << "\n" << "\n";
	std::cout << "Adad vared kon (Zoj-Fard): ";
	int m;
	std::cin >> m;
	if (Zoj_Fard(m) == true) {

		std::cout << "Javab zoj ast: " << m << "\n";

	}
	else
	{

		std::cout << "Javab fard ast: " << m << "\n";

	}
	
	return 0;


}



void print(int x, int y) {


	std::cout << "Natije: " << isEqual(x, y) << "\n";
	return;

}


bool isEqual(int x, int y) {

	return (x == y);

}

bool Zoj_Fard(int moghayese) {


	return moghayese % 2 == 0;


}

