#include <iostream>

int main() {

    // Maghadir khas:

    // Double:
    std::cout << "Double: " << '\n';
    double num1 = 0.0;
    double num2 = 2.0;
    double num3 = -2.0;

    std::cout << "Infinity Positive: " << num2 / num1 << '\n';
    std::cout << "Infinity Negative: " << num3 / num1 << '\n';
    std::cout << "Not A Number: " << num1 / num1 << '\n';

    // Float:
    std::cout << "\nFloat: " << '\n';
    float number1 = 0.0f;
    float number2 = 2.0f;
    float number3 = -2.0f;

    std::cout << "Infinity Positive: " << number2 / number1 << '\n';
    std::cout << "Infinity Negative: " << number3 / number1 << '\n';
    std::cout << "Not A Number: " << number1 / number1 << '\n';


    return 0;
}