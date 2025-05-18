#include <iostream>

int main() {

    double num1 = 111.3;
    double num2 = 11.3;
    num1 = num1 -= 1.0;
    num2 = num2 -= 1.0;

    if (num1 == num2)
    {
        std::cout << "Barabar hast";
    }
    if (num1 > num2)
    {
        std::cout << "In ejra mishe";
    }
    if (num1 < num2)
    {
        std::cout << "In ejra nemishe!!";
    }


    return 0;
}