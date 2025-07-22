#include <iostream>
#include <string>
#include <string_view>

int input();
std::string name();
void print(int num, std::string_view name);

int main() {

    int num = input();
    print(num, name());

    return 0;
}

int input() {

    std::cout << "Enter your Number: ";
    int num;
    std::cin >> num;
    return num;
}
std::string name() {

    std::cout << "Enter your fname: ";
    std::string name;
    std::getline(std::cin >> std::ws, name);

    return name;
}
void print(int num, std::string_view name) {

    std::cout << "Your Number: " << num << '\n';
    std::cout << "Your fname: " << name << '\n';

    return;
}