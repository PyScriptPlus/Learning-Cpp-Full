#include <iostream>
#include <cstdint>

int main() {

    // 4 Ta Function asli ba inam ham mirim 
    // Vali mitunim bar roye chand ta bit masalan set()
    // Ro e'mal konim
    // test() Bitwise AND
    // set() Bitwise OR
    // reset() Bitwise AND va Bitwise NOT
    // flip() Bitwise XOR

    constexpr std::uint8_t mask0 = 0x01;
    constexpr std::uint8_t mask1 = 0x02;
    constexpr std::uint8_t mask2 = 0x04;
    constexpr std::uint8_t mask3 = 0x08;
    constexpr std::uint8_t mask4 = 0x10;
    constexpr std::uint8_t mask5 = 0x20;
    constexpr std::uint8_t mask6 = 0x40;
    constexpr std::uint8_t mask7 = 0x80;

    std::uint8_t flags = 0b0000'1010;

    //test()
    // Bayad Ternary-Operator estefade mikardam chon nemishod 0-1 ba int chap kard
    std::cout << "Bit Position 1: " << ((flags & mask1) ? "ON\n" : "OFF\n");

    //set()
    flags |= mask0;
    // Mitunim chand ta bit ro set konim
    flags |= (mask4 | mask5 | mask6);
    std::cout << "Bit Position 0: " << ((flags & mask0) ? "ON\n" : "OFF\n");
    std::cout << "Bit Position 4: " << ((flags & mask4) ? "ON\n" : "OFF\n");
    std::cout << "Bit Position 5: " << ((flags & mask5) ? "ON\n" : "OFF\n");
    std::cout << "Bit Position 6: " << ((flags & mask6) ? "ON\n" : "OFF\n");

    //reset()
    flags &= ~mask0;
    flags &= ~(mask4 | mask5 | mask6);
    std::cout << "Bit Position 0: " << ((flags & mask0) ? "ON\n" : "OFF\n");
    std::cout << "Bit Position 4: " << ((flags & mask4) ? "ON\n" : "OFF\n");
    std::cout << "Bit Position 5: " << ((flags & mask5) ? "ON\n" : "OFF\n");
    std::cout << "Bit Position 6: " << ((flags & mask6) ? "ON\n" : "OFF\n");

    //flip()
    flags ^= mask0;
    flags ^= (mask4 | mask5 | mask6);
    std::cout << "Bit Position 0: " << ((flags & mask0) ? "ON\n" : "OFF\n");
    std::cout << "Bit Position 4: " << ((flags & mask4) ? "ON\n" : "OFF\n");
    std::cout << "Bit Position 5: " << ((flags & mask5) ? "ON\n" : "OFF\n");
    std::cout << "Bit Position 6: " << ((flags & mask6) ? "ON\n" : "OFF\n");

    flags ^= mask0;
    flags ^= (mask4 | mask5 | mask6);
    std::cout << "Bit Position 0: " << ((flags & mask0) ? "ON\n" : "OFF\n");
    std::cout << "Bit Position 4: " << ((flags & mask4) ? "ON\n" : "OFF\n");
    std::cout << "Bit Position 5: " << ((flags & mask5) ? "ON\n" : "OFF\n");
    std::cout << "Bit Position 6: " << ((flags & mask6) ? "ON\n" : "OFF\n");

    return 0;
}