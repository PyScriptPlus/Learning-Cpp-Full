#include <iostream>

int main() {

    std::cout << "Enter first number and second number: ";
    int num1 , num2;
    std::cin >> num1 >> num2;
    int maxNum = (num1 > num2) ? num1 : num2;
    int minNum = (num1 < num2) ? num1 : num2;
    std::cout << "MAX: " << maxNum << '\n';
    std::cout << "MIN: " << minNum << '\n';
    
    return 0;
}