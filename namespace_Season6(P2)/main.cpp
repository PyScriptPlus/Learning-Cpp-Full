#include <iostream>
#include "add.hpp"

int main() {

    std::cout << basicMath::add(4, 1) << '\n';
    std::cout << basicMath::add(5, 5) << '\n';

    // Run Command: g++ main.cpp add.cpp -o namespace.exe
    return 0;
}