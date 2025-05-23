#include <iostream>
#include <cmath>
#include <format>

int main() {

    int num1 = 2 + 2 * 2; // Olaviyat zarb balatar az jam has
    std::cout << num1 << '\n';
    int num2 = (2 + 2) * 2; // Olaviyat parantez TOP avvale
    std::cout << num2 << '\n';
    int num3 = 2 + (2 * 2); // Parantez moheme baraye khanayi behtar
    std::cout << num3 << '\n';

    // Tavan:
    int num4 = pow(2, 8) - 1;
    std::cout << "1Byte unsigned: 0 ta " << num4 << '\n';

    int num5 = pow(-2, 8 - 1);
    int num6 = pow(2, 8 - 1) - 1;
    // C++20: format
    std::cout << std::format("1Byte Signed: {} ta {}", num5, num6);



    return 0;
}