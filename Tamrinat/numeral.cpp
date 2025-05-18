#include <iostream>
#include <cstdint>
#include <bitset>

int main() {

    // int x = 0725;
    // std::cout << x << '\n';
    // std::cout << 0xFF << '\n';
    // int y = 0b1000;
    // std::cout << y << '\n' << 010 << '\n';
    std::cout << "HexaDecimal: " << std::hex << 12 << '\n';
    std::cout << "Octal: " << std::oct << 12 << '\n';
    std::cout << std::dec;
    std::bitset<4> mybit = 0xF;
    std::cout << "Binary: " << mybit << '\n';

    std::cout << 0xCA2 << '\n';
    std::cout << 0x1A3F << '\n';

    return 0;
}