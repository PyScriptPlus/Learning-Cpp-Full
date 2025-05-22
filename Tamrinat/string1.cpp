#include <iostream>
#include <string>
#include <istream>

int main() {

    int num1 = 50;
    std::string num2 = "50";
    // std::cout << num1 + num2 << '\n'; // Error
    int num3 = std::stoi(num2);
    std::cout << num1 + num3 << '\n';

    // Default string --> C-Style String
    char salam[] = "Salam";
    std::cout << typeid(salam).name() << '\n' << salam << '\n';

    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;

    std::cout << "Enter your name: ";
    std::string fname;
    // std::cin >> fname; // WhiteSpace bezarim meghdar badi mire variable dige
    std::getline(std::cin >> std::ws , fname);


    std::cout << "Your name is: " << fname << '\n';
    std::cout << "Your age is: " << age << '\n';

    return 0;
}
