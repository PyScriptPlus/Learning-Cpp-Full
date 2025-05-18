#include <iostream>
#include <cmath>
#include <climits>

int main() {

    std::cout << "Unsigned: " << pow(2 , 16) - 1 << '\n';
    std::cout << "Signed manfi: " << pow(-2 , 16 - 1) << '\n';
    std::cout << "Signed mosbat: " << pow(2 , 16 - 1) - 1 << '\n';
    // 65536 - 1 = 65535;
    short kilo = -32768;
    std::cout << kilo << '\n';
    std::cout << sizeof(short) << '\n';

    unsigned int x = 5;
    unsigned int y = 6;

    if (UINT_MAX == 4294967295)
    {
        std::cout << x - y << '\n'; // Output --> UINT_MAX      
    }
    else
    {
        std::cout << "Yaft nashod!!!" << '\n';
    }
    
  
    
    std::cout << UINT_MAX << '\n';
    std::cout << INT_MAX << '\n';
    std::cout << SHRT_MAX << '\n';
    std::cout << LONG_MAX << '\n';
    std::cout << LLONG_MAX << '\n';

    // 2147483647
    int num1 = 2147483647;
    int num2 = 3;
    std::cout << num1 + num2 << '\n';


    return 0;
}