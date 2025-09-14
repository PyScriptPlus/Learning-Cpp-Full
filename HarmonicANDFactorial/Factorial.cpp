#include <iostream>

int main() {

    std::cout << "Enter number: ";
    int x;
    std::cin >> x;
    int i = 1;
    int res = 1;
    while(i <= x)
    {
        std::cout << "Result: " << i << " * " << res << " = ";
        res *= i;
        std::cout << res << '\n';
        i++;
    }


    return 0;
}