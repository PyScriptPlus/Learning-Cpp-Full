#include <iostream>
#include <iomanip>

int main() {

    // 2.12 x 10 ^ Exponent
    // 0.00245200 x 10 ^ Exponent

    // Mesal:
    // 2.12 toye code benevis:
    double num1 = 2.12e2;
    std::cout << num1 << '\n';
    // 200.6548
    double num2 = 2.006548e2;
    std::cout << num2 << '\n';
    // 4.2150000000000
    double num3 = 4.215e13;
    std::cout << std::fixed << num3 << '\n'; // std::fixed male <iomanip> hast

    // Mesal mikhaym hamino Scientific Notation sho peyda konim 
    // Khodamemun engar nemidunim ba ye code mikhaym Scientific Notation sho peyda konim
    // 42150000000000
    double num4 = 42150000000000;
    std::cout << std::scientific << num4 << '\n'; // OutPut: 4.215000e+13
    // 4.215000e+13  On 3 ta 000 haye joloye 5 hesab nistan
    // std::scientific ham toye Library <iomanip> hast
    
    std::cout << std::defaultfloat; // Baraye in zadim scientifc dar biaym

    // 600.5389
    double num5 = 6.005389e2;
    std::cout << num5 << '\n';

    // 0.00012579
    double num6 = 1.2579e-4;
    std::cout << num6 << '\n';

    return 0;
}