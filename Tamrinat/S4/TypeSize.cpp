#include <iostream>

int main() { 

    // Integer:
    long _long;
    std::cout << "Long: " << sizeof(_long) << '\n';
    long long _longlong;
    std::cout << "Long Long: " << sizeof(_longlong) << '\n';
    short _short;
    std::cout << "Short: " << sizeof(_short) << '\n';
    int _int;
    std::cout << "Int: " << sizeof(_int) << '\n';

    // Floating-Point:
    double _double;
    std::cout << "Double: " << sizeof(_double) << '\n';
    long double _long_double;
    std::cout << "Long double: " << sizeof(_long_double) << '\n';
    float _float;
    std::cout << "Float: " << sizeof(_float) << '\n';
    
    // Boolean:
    bool _bool;
    std::cout << "Boolean: " << sizeof(_bool) << '\n';

    // Character:
    char _char; // Faghat English
    std::cout << "char: " << sizeof(_char) << '\n';
    char16_t _char16;
    std::cout << "char16: " << sizeof(_char16) << '\n';
    char32_t _char32;
    std::cout << "char32: " << sizeof(_char32) << '\n';
    wchar_t _wchar; // Poshtibani az kheyli Language haye donya va Farsi :D
    std::cout << "wchar: " << sizeof(_wchar) << '\n';
    // wchar_t: Toye Windows 2Byte 16Bit eshghal mikone
    // Toye Linux 4Byte 32Bit

    return 0;
}