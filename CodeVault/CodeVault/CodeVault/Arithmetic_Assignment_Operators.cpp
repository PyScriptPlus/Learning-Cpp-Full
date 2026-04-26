#include <iostream>
// In Arithmetic_Assignment 
// Kheyli rahate 
// Dar code mesali barash zadam 

int main() {

	// Khob in mesal payin bebinid:
	// In code be nazar man behtar nist 
	int x = 5;
	/*
	x = x + 3;
	x = x - 2;
	x = x * 5;
	x = x / 2;
	x = x % 3;
	*/
	// Bia eyn hamino herfeyi tar konim
	// Mesal:
	int adadAvval = 10;

	/*
	adadAvval = adadAvval += 2;
	adadAvval = adadAvval -= 3;
	adadAvval = adadAvval *= 4;
	adadAvval = adadAvval /= 2;
	adadAvval = adadAvval %= 2;
	*/

	adadAvval = adadAvval /= 2;	
	std::cout << "Result: " << adadAvval << '\n';

	/* 
	Kholase:
	Hamino x + y
	Kardim injuri x += y
	*/

	return 0;
}