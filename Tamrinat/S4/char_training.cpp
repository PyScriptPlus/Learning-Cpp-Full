#include <iostream>

int main() {
    
    char s = 'a';
    std::cout << "Char is: " << s << '\n';
    char ss = 97;
    std::cout << "Char is: " << ss << '\n';

    char o = '$';
    const char* aloo = "Salam";
    std::cout << aloo << '\n';

    int ascii_num1 = s;
    std::cout << "ASCII code Implicit: " << ascii_num1 << '\n';

    int ascii_num2 = static_cast<int>(s);
    std::cout << "ASCII code Explicit: " << ascii_num2 << '\n';
    
    int ascii_num3 = static_cast<int>(o);
    std::cout << "ASCII code Explicit: " << std::hex << ascii_num3 << '\n';

    return 0;
}