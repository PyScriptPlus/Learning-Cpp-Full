#include <iostream>
#include <cstdint>

int main() {

    std::uint16_t alef = 65535;
    std::int16_t salam = static_cast<std::int16_t>(alef);
    std::cout << salam << '\n';
    std::cout << alef << '\n';

    return 0;

}