#include <iostream>
#include <bitset>
#include <ciso646>

int main() {


    constexpr std::uint8_t mask1 = 0b0000'0001;
    constexpr std::uint8_t mask2 = 0b0000'0010;
    constexpr std::uint8_t mask3 = 0b0000'0100;


    std::uint8_t flags = 0b0000'0111;

    std::cout << "Salam: " << ((flags & mask1) ? "Fix\n" : "Fail\n");
    std::cout << "Salam: " << ((flags & mask2) ? "Fix\n" : "Fail\n");
    std::cout << "Salam: " << ((flags & mask3) ? "Fix\n" : "Fail\n");
    // std::bitset<4> x = 0b1001;
    // std::bitset<4> y = 0b1011;
    // std::cout << ~x << '\n';

    // std::bitset<4> x = 0b1000;
    // std::bitset<4> y = 0b0100;

    // unsigned int x = 0b1000;
    // unsigned int y = 0b0100;    

    return 0;
}