#include <iostream>

int main() {

    //Addition Assignment:
    int num1 = 54;
    num1 += 6;
    std::cout << "Addition Assignment: " << num1 << '\n';
    int x = 10;
    num1 += x;
    std::cout << "Addition Assignment: " << num1 << '\n';

    // Subtraction Assignment:
    int num2 = 9;
    num2 -= 4;
    std::cout << "Subtraction Assignment: " << num2 << '\n';

    // Multiplication Assignment:
    int num3 = 2;
    num3 *= 5;
    std::cout << "Multiplication Assignment: " << num3 << '\n';
    int y = 10;
    num3 *= y;
    std::cout << "Multiplication Assignment: " << num3 << '\n';
    
    // Division Assignment:
    int num4 = 36;
    num4 /= 6;
    std::cout << "Division Assignment: " << num4 << '\n';
    int i = 2;
    num4 /= i;
    std::cout << "Division Assignment: " << num4 << '\n';

    // Modulus Assignment:
    int num5 = 6;
    num5 %= 3;
    std::cout << "Modulus Assignment: " << num5 << '\n';


    return 0;
}