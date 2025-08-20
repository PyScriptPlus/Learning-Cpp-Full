#include <iostream>
#include "boolean.h"

extern "C" {
    void halghe(int x, bool y);
}

int main() {

    // bool x;
    // std::cout << x << '\n';
    // x = !false;
    // std::cout << x << '\n';
    // std::cout << std::boolalpha;
    // x = false;
    // std::cout << x << '\n';
    // x = true;
    // std::cout << x << '\n';
    // // std::cout << "Enter bool: ";
    // // std::cin >> x;
    // // std::cout << x << '\n';
    // std::cout << "Enter bool: ";
    // std::cin >> std::boolalpha >> x;
    // std::cout << x << '\n';

    // std::cout << std::noboolalpha;
    // std::cin >> std::noboolalpha;


    // std::cout << "\n===========================================\n";

    halghe(5, 1);

    return 0;
}