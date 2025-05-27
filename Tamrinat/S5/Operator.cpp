#include <iostream>

int main() {

    int x = 5;
    std::cout << -x << '\n';
    std::cout << +x << '\n';

    x += 3;
    std::cout << x-- << '\n';
    std::cout << --x << '\n';

    std::cout << ++x << '\n';
    std::cout << -x << '\n';

    // --y ++x 
    // x + y 
    // (Condition) ? True : False;

    int xy = -20;
    std::cout << -xy << '\n';
    
    int yz = 4;
    std::printf("%d\n", -yz);

    int num1 = 5;
    int num2 = 2;
    std::cout << static_cast<double>(num1) / static_cast<double>(num2) << '\n';
    std::cout << 5.0 / 2 << '\n';
    std::cout << 5 / 2.0 << '\n';
    std::cout << 5.0 / 2.0 << '\n';

    int num3;
    std::cin >> num3;
    if (num3 == 0)
    {
        std::cout << "adad 0 nemishe :)" << '\n';
    }
    else
    {
        std::cout << 1 / num3;
    }
    
     
    

    

    return 0;
}