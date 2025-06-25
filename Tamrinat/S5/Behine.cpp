#include <iostream>
#include <cstdint>

int main() {
    // 8Byte
    bool ali_happy = true;
    bool ali_hungry = false;
    bool ali_sad = false;
    bool ali_sleeping = true;
    bool ali_running = false;
    bool ali_crying = true;
    bool ali_full = true;
    bool ali_laughing = false;
    // 8Byte
    bool reza_happy = false;
    bool reza_hungry = true;
    bool reza_sad = true;
    bool reza_sleeping = true;
    bool reza_running = false;
    bool reza_crying = false;
    bool reza_full = false;
    bool reza_laughing = false;
    // 8 * 2 OR 8 + 8 = 16Byte 



    // Bit Manipulation:
    // 8Byte ke hesabam nemishe felan
    constexpr std::uint8_t happy = 0x01;
    constexpr std::uint8_t hungry = 0x02;
    constexpr std::uint8_t sad = 0x04;
    constexpr std::uint8_t sleeping = 0x08;
    constexpr std::uint8_t running = 0x10;
    constexpr std::uint8_t crying = 0x20;
    constexpr std::uint8_t full = 0x40;
    constexpr std::uint8_t laughing = 0x80;

    // 2Byte am baraye in 2 nafar:
    // Ali = 1Byte
    // Reza = 1Byte
    std::uint8_t ali = 0;
    std::uint8_t reza = full;
    reza &= ~full;
    std::cout << static_cast<bool>(reza & full) << '\n';
    // Jam: 8 + 2 = 10Byte
    ali = ~ali;
    std::cout << (static_cast<bool>(ali & crying) ? "Yes\n" : "No\n");
    std::cout << (static_cast<bool>(ali & full) ? "Yes\n" : "No\n");
    std::cout << (static_cast<bool>(ali & happy) ? "Yes\n" : "No\n");
    std::cout << (static_cast<bool>(ali & laughing) ? "Yes\n" : "No\n");
    std::cout << (static_cast<bool>(ali & running) ? "Yes\n" : "No\n");
    std::cout << (static_cast<bool>(ali & sleeping) ? "Yes\n" : "No\n");
    std::cout << (static_cast<bool>(ali & sad) ? "Yes\n" : "No\n");
    std::cout << (static_cast<bool>(ali & hungry) ? "Yes\n" : "No\n");


    return 0;
}