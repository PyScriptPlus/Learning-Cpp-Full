#include <iostream>

int main() {
	// Kolan 6 ta Relational Operator darim!!
	
	// Relational Operator: < , > , = , <= , >= , ! , != , ==
	// Less Than: <
	// Greather Than: >
	// Less Than OR Equal to: <=
	// Greather Than OR Equal to: >=
	// Equal to: ==
	// Not: !
	// Not Equal to: !=

	// Khoruji in Operator ha Boolean hast: True OR False
	
	// Mesal codi ba if bezanim:
	if (5 > 2)
	{
		std::cout << "5 is Greather Than 2" << '\n';
	}
	if (10 < 11)
	{
		std::cout << "10 is Less Than 11" << '\n';
	}
	if (100 == 100)
	{
		std::cout << "100 is Equal to 100" << '\n';
	}
	if (10 >= 10)
	{
		std::cout << "10 is Greather Than OR Equal to 10" << '\n';
	}
	if (20 <= 20)
	{
		std::cout << "20 is Less Than OR Equal to 20" << '\n';
	} 
	if (5 != 4)
	{
		std::cout << "5 is NOT Equal to 5" << '\n';
	}
	if (!2)
	{
		std::cout << "2 is Not" << '\n';
	}
	else
	{
		std::cout << "Other Number" << '\n';
	}

	bool gender;
	std::cout << "Pleas Enter your gender: (Male: 1) OR (Fmale: 0): ";
	std::cin >> gender;
	//if (gender == 1) // Code tamizi nist 
	if (gender)
	{
		std::cout << "Your Gender is Male" << '\n';
	}
	// else if(gender == 0) inam tamiz nist
	else if(!gender) 
	{
		std::cout << "Your Gender is Fmale" << '\n';
	}

	return 0;
}