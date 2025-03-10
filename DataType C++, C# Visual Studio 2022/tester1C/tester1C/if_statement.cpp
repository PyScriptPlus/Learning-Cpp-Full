#include <iostream>


int if_statement();


int main() {

	
	 if_statement();

	/*
		Less than: a < b
		Less than or equal to : a <= b
		Greater than : a > b
		Greater than or equal to : a >= b
		Equal to a == b
		Not Equal to : a != b
	 */


#if 0
	if (/*condition*/)
	{
		// body of if statement
	}
#endif



#if 0 

	if (condition) {
		// block of code if condition is true
	}
	else {
		// block of code if condition is false
	}

#endif



#if 0

	if (condition1) {
		// code block 1
	}
	else if (condition2) {
		// code block 2
	}
	else {
		// code block 3
	}

#endif

#if 0 

	// outer if statement
	if (condition1) {

		// statements

		// inner if statement
		if (condition2) {
			// statements
		}
	}


#endif




}


int if_statement() {

	std::cout << std::boolalpha;
	std::cout << "Vared kon: ";
	int x;
	std::cin >> x;
	if (x != 0)
	{
		bool i = true;
		std::cout << i;
	}
	else
	{
		bool i;
		i = false;
		std::cout << i;

	}

	return x;
}