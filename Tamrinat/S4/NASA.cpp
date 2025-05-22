#include <iostream>
#include <iomanip>

int main() {

    double x = 100.0 - 99.1;
    std::cout << "Value1: " << x << '\n';
    double y = 10.0 - 9.1;
    std::cout << "Value2: " << y << '\n';

    std::cout << std::setprecision(17);
    std::cout << "Value1 setprecision17: " << x << '\n';
    std::cout << "Value2 setprecision17: " << y << '\n';

    if (x == y)
    {
        std::cout << "True" << '\n';
    }
    else
    {
        std::cout << "False" << '\n';
    }
    

    return 0;
}