#include <iostream>


int main() {

	// Hatman bayad tak character bashe va makhsosan 
	// Tak کدیشن bashe
	char t1 = 'a';
	std::cout << t1 << '\n';

	// Khob in 'a' Computer az koja mifahme a malume 01010
	// Khob  'a' chejuri zakhire sazi mishe?
	// Code ASCII 
	char t2 = 'a';
	int s1 = t2;
	std::cout << s1 << '\n'; // OutPut 97 : Code ASCII 'a' hast

	char t3 = 97;
	std::cout << t3 << '\n'; // OutPut a

	std::cout << "\nJadida: " << '\n';

	char t4 = '$'; 
	char t5 = ' '; // space 
	char t6 = '5';
	char t7 = '.';
	std::cout << t4 << '\n' << t5 << '\n';
	std::cout << t6 << '\n' << t7 << '\n' << '\n';
	std::cout << "Neveshte shode ba static_cast payin: " << '\n' << '\n';

	// In hamon Conversion hast
	// char tabdil kardam be int bedon inke biam yeki yeki
	// Az avval baraye har kodum Variable int tarif konam
	std::cout << static_cast<int>(t4) << '\n' << static_cast<int>(t5) << '\n';
	std::cout << static_cast<int>(t6) << '\n' << static_cast<int>(t7) << '\n';

	return 0;


}