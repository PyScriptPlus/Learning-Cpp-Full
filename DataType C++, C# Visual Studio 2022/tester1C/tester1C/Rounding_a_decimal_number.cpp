#include <iostream>
#include <cmath>

// Function round() dar Library cmath ya math.h hast !!!

int main() {

	double num1 = 10.5;
	float num2 = 9.50f;

	double num3 = 5.49;
	float num4 = 1.10;

	int res1 = round(num1);
	int res2 = round(num2);
	int res3 = round(num3);
	int res4 = round(num4);

	std::cout << "Your number is: " << res1 << '\n';
	std::cout << "Your number is: " << res2 << '\n';
	std::cout << "Your number is: " << res3 << '\n';
	std::cout << "Your number is: " << res4 << '\n';
   
	return 0;
}