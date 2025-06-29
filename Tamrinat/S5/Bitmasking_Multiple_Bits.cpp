#include <iostream>
#include <cstdint>
#include <bitset>

// Ma mitunim toye Mask ha bejaye target 1bit chand ta bit baham dar yek Mask
// Target konim
// Ba 3 ravesh
// Binary Literal
// Shift
// Hexadecimal

int main() {

    // Binary Literal:
    constexpr std::uint16_t binaryMask = 0b0000'0000'1111'1111;
    // On bit hayi ke mikhay Target koni 1 onayi ke nemikhay 0 bezar

    // Shift:
    // In ye formul dare 
    // ((1 << length) -1) << Position
    constexpr std::uint16_t shiftMask = ((1 << 5) - 1) << 0; 
    // 0000'0000'0001'1111
    // Tozihat nemidam dige toye daftar va tester1C toye Visual Studio 2022 hast
    // Va toye Season4.cpp ham minevisam


    // Hexadecimal:
    // Inam dige rahate har 1 bit ro 4 ta dar nazar begir
    // Va binary sho bedun benevis toye zehnet binary sho bedon ba'ad hexa sho benevis
    // Tozihat ziad dar daftar va tester1C toye Visual Studio 2022 hast
    constexpr std::uint16_t hexadecimalMask = 0x00C3;
    // 0000'0000'1100'0011
    return 0;
}