// Syntax:
/*
while(condition)
	statement;

//------------//

while (Condition)
{
	statement;
	statement;
	statement;
}
*/
#include <iostream>
#include <string>

void loop(int x = 0);

int main() {

	loop();

	// Yedune am do-While darim
	// Ke age shart ma che false bashe che true hatman 1 bar ejra mishe
	// Avval dastorat ejra mishe ba'ad shart halghe barresi mishe
	
	std::string passwordDataBase = "pa$w0rd";
	std::string password;
	do 
	{
		std::cout << "Enter password: ";
		std::cin >> password;
	} while (password != passwordDataBase);
	std::cout << "Password is correct!\n";

	return 0;
}

void loop(int x) {
	while (x <= 10)
	{
		std::cout << "Number: " << x << '\n';
		++x;
	}
	return;
}

// Loop bi nahayat:
/*
while (true)
{
	// Baraye khoruj az Halghe:
	// return
	// exit()
	// break
	// goto
	// Exception
}
*/