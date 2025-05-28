#include <iostream>
#include <cmath>
#include <format>

int main() {

    /*  
        Syntax tavan:
        std::pow(double _X, double _Y);
        OR
        pow(double _X, double _Y);
    */

    // How many save value in 8Bit or 1Byte:
    int unsignedNum = std::pow(2, 8) - 1;
    int signedNumNegetive = std::pow(-2, 8 - 1);
    int signedNumPlus = std::pow(2, 8 - 1) - 1;
    std::cout << "Unsigned: 0 ta " << unsignedNum << '\n';
    // C++20 Support
    std::cout << std::format("Unsigned az {} ta {} mishe save kard",
        signedNumNegetive,
        signedNumPlus)
        << '\n';


    return 0;
}