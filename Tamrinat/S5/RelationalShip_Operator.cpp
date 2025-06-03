#include <iostream>
#include <Windows.h>
#include <string>

int main() {

    SYSTEMTIME si;
    GetLocalTime(&si);
    std::cout << "Enter your clock: ";
    std::string clock;
    std::getline(std::cin >> std::ws , clock);
    if (clock == "Clock" || clock == "clock")
    {
        std::cout << "Sa'at makan khodeton :)" << '\n';
        std::cout << si.wHour << " : " << si.wMinute << '\n';
    }
    else
    {
        std::cout << "Eshtebah neveshti (Clock) OR (clock)" << '\n';
    }

    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    std::cout << ((age >= 18) ? "Sen ghanoni hasti" : "Sen zir ghanoni hasti");
    
    // In faghat dar C++20 be bala javabe
    if ((age <=> 2) < 0)
    {
        std::cout << "\nTest1" << '\n';
    }
    else if ((age <=> 2) > 0)
    {
        std::cout << "\nTest2" << '\n';
    }
    else
    {
        std::cout << "\nTest3" << '\n';
    }
    
    

    return 0;
}