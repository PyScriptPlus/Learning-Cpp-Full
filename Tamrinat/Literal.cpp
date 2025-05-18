#include <iostream>

int main() {

    const char* salam = u8"hello";
    const char32_t* y = U"Red";
    const char16_t* x = u"Green";
    const wchar_t* ll = L"Yellow";
    
    std::cout << salam << '\n';

    return 0;
}