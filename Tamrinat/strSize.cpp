#include <iostream>
#include <string>


int main() {

    // std::cout << sizeof(std::string) << '\n';

    // int x = 10;
    // std::string number = "5";
    // int convert = std::stoi(number);
    // std::cout << x + convert << '\n';
    
    std::cout << "Vared kon age: ";
    int age;
    std::cin >> age;
    std::cout << "Vared kon Fname: ";
    std::string fName;
    std::getline(std::cin >> std::ws , fName);
    
    using namespace std::literals;
    std::cout << "Your age is: " << age << '\n';
    std::cout << "Your name is: " << fName << '\n';
    std::cout << "Caharacter name: " << fName.length() << '\n';
    std::cout << "Caharacter name JADID: " << ssize(fName) << '\n';

    return 0;
}

