#include <iostream>
#include <string>

int main() {


	// goto mansokh shode ast !!!!
	// Estefade nakon code tamizi nist
	static int st = 0;
	std::cout << "Enter your password: ";
	std::string password;
	labeljmp:
	if(st >= 1)
		std::cout << "Enter your password(TryAgain): ";
	std::cin >> password;
	if (password == "Mamad")
		std::cout << "Successful!" << '\n';
	else
	{
		std::cout << "Retry!\n";
		++st;
		goto labeljmp;
	}

	return 0;
}