#include <iostream>
#include <cstdint>

int main() {

    // 3 Ta ravesh baraye sakht Mask ha:

    // Binary Literal:
    constexpr std::uint8_t binary0 = 0b0000'0001;
    constexpr std::uint8_t binary1 = 0b0000'0010;
    constexpr std::uint8_t binary2 = 0b0000'0100;
    constexpr std::uint8_t binary3 = 0b0000'1000;
    constexpr std::uint8_t binary4 = 0b0001'0000;
    constexpr std::uint8_t binary5 = 0b0010'0000;
    constexpr std::uint8_t binary6 = 0b0100'0000;
    constexpr std::uint8_t binary7 = 0b1000'0000;

    // Shift:
    constexpr std::uint8_t shift1 = 1 << 1;
    constexpr std::uint8_t shift0 = 1 << 0;
    constexpr std::uint8_t shift2 = 1 << 2;
    constexpr std::uint8_t shift3 = 1 << 3;
    constexpr std::uint8_t shift4 = 1 << 4;
    constexpr std::uint8_t shift5 = 1 << 5;
    constexpr std::uint8_t shift6 = 1 << 6;
    constexpr std::uint8_t shift7 = 1 << 7;

    // Hexadecimal:
    constexpr std::uint8_t mask0 = 0x01;
    constexpr std::uint8_t mask1 = 0x02;
    constexpr std::uint8_t mask2 = 0x04;
    constexpr std::uint8_t mask3 = 0x08;
    constexpr std::uint8_t mask4 = 0x10;
    constexpr std::uint8_t mask5 = 0x20;
    constexpr std::uint8_t mask6 = 0x40;
    constexpr std::uint8_t mask7 = 0x80;

    return 0;
}