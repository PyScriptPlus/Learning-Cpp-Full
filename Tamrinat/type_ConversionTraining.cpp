#include <iostream>
#include <cstdint>

void kilo(int x) {

    std::cout << x << '\n';
    return;
}

int main()
{
    // kilo(5.6); // Unsafe warning dar Compiler MSVC , Clang
    kilo(static_cast<int>(5.6)); // Safe
    kilo((int)5.6);
    // kilo({5.6}); // Error

    char identifier = 97;
    int num = static_cast<int>(identifier);
    std::cout << num << '\n';

    char ascii = 'b';
    std::cout << static_cast<int>(ascii) << '\n';

    uint8_t num2 = 255;
    std::cout << static_cast<int8_t>(num2) << '\n';

    int8_t num3 = 98;
    std::cout << num3 << '\n';
    
    return 0;
}
