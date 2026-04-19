#include <iostream>

#define print(str) std::cout << str << '\n';

void if_foo(int x);
void sw_foo(int x);
bool isVowel(char x);
bool isVowelSw(char x);

int main() {
	
	sw_foo(5);
	std::cout << std::boolalpha;
	std::cout << "IsVowel: " << isVowelSw('A') << '\n';
	std::cout << std::noboolalpha;
	std::cout << "IsVowel: " << isVowel('e') << '\n';


	// Toye switch mishe Variable ta'rif kard faghat
	// Nemituni Initialization avvali koni !!!!
	// Kemelesh dar daftar
	switch (5) 
	{
			int x;
			int y = 5; // ERROR Run-Time
		case 1:
			x = 5; // In kamelan doruste
			int z;
			break;
		case 2:
			z = 32;
			break;
	}

	return 0;
}


void if_foo(int x) {

	// Toye in bayad x 3 martabe Eveluated beshe
	// Shayad 1000 bar 
	// Hala behtare dar chenin senario Switch estefade
	// Konim.

	if (x == 1)
		;
	else if (x == 2)
		;
	else if (x == 4)
		;
	else
		;

	return;
}


void sw_foo(int x) {


	// Inja dige faghat 1 bar Evaluated mishe
	// Chon az shiveye Jump Table estefade mikone
	// Tozihat kamel dar daftar
	// break ham mituni estefade koni ke kamel az
	// Function birun nayad
	switch (x) 
	{
		case 1:
			print("Adad 1");
			return;
		case 2:
			print("Adad 2");
			return;
		case 3:
			print("Adad 3");
			return;
		case 4:
			print("Adad 4");
			return;
		default:
			print("Not Found!");
			return;
	}

	return;
}

// Mesal dige:

bool isVowel(char x) {
	// Age yeki az ina bashe bayad True bargardone
	// Ke ravesh behine nist
	return (x == 'a' || x == 'e' || x == 'i' || x == 'o'
		|| x == 'u' || x == 'A' || x == 'E' || x == 'I' ||
		x == 'O' || x == 'U');
}

// Ba switch

bool isVowelSw(char x) {
	switch (x)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			return true;
		default:
			return false;
	}
}