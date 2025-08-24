#include <iostream>

int main() {

    std::cout << "Enter one Number: ";
    int x;
    std::cin >> x; 
    std::cout << "Enter two Number: ";
    int y;
    std::cin >> y;
    try
    {
        if (x == 0 || y == 0)
        {
            throw "Taghsim bar 0 nemishe!!!!";
        }
        int res = x / y;
        std::cout << x << " / " << y << " = " << res << '\n';
    }
    catch(const char* msg)
    {
        std::cout << "Error: " << msg << '\n';
    }

    std::cout << "Good Bye!" << '\n';

    return 0;
}