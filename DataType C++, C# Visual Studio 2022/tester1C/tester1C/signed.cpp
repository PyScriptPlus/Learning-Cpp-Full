#include <iostream>
// #include <math.h> // In baraye pow hast az zaban C baraye C++ bagi monde standard nist
#include <cmath> // Inam baraye pow hast vali in makhsos C++ az fazaye namespace std hast standard hast
// Behtare az cmath estefade shavad harkodum dos dari vali khob 
// Shayad dar math.h khast std:: bezarim ta kar kone momken hast
int main() {

	// Pow tavan hast pow(adad , be tavan);
	int signedednegetive = pow(-2, 8 - 1);
	int signededplus = pow(2 , 8 - 1) - 1;
	std::cout << signedednegetive << "\t" << signededplus << "\n";

	//*********************************************

	std::cout << pow(2 , 16) - 1 << "\n";

	//**********************************************
	int a = sizeof(short);
	std::cout << a;
	return 0;

}