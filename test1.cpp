#include <iostream>
#include <string>

std::string getName()
{

    std::string Fname;
    std::cout << "Enter your Name: ";
    std::getline(std::cin , Fname);
    return Fname;

}