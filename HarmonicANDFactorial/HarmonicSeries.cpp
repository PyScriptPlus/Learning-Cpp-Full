#include <iostream>

int main() {

    std::cout << "Enter number: ";
    double x;
    std::cin >> x;
    double i = 1;
    double res = 0;
    while(i <= x)
    {
        res += (1 / i);
        std::cout << "Result: " << res << '\n';
        i++;
    }
    
    return 0;
}