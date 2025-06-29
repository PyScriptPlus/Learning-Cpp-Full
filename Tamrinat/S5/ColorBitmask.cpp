#include <iostream>
#include <cstdint>

int main() {

    constexpr std::uint32_t redMask = 0xFF000000;
    constexpr std::uint32_t greenMask = 0x00FF0000;
    constexpr std::uint32_t blueMask = 0x0000FF00;
    constexpr std::uint32_t alphaMask = 0x000000FF;

    std::cout << "Enter color Hexadecimal 32bit: ";
    std::uint32_t pixel;
    std::cin >> std::hex >> pixel;

    std::uint8_t red = static_cast<std::uint8_t>((pixel & redMask) >> 24);
    std::uint8_t green = static_cast<std::uint8_t>((pixel & greenMask) >> 16);
    std::uint8_t blue = static_cast<std::uint8_t>((pixel & blueMask) >> 8);
    std::uint8_t alpha = static_cast<std::uint8_t>(pixel & alphaMask);
   
    std::cout << "Decimal: " << '\n';
    std::cout << "Red: " << static_cast<int>(red) << '\n';
    std::cout << "Green: " << static_cast<int>(green) << '\n';
    std::cout << "Blue: " << static_cast<int>(blue) << '\n';
    std::cout << "Alpha: " << static_cast<int>(alpha) << '\n';


    std::cout << "\nHexadecimal: " << '\n';
    std::cout << std::hex;
    std::cout << "Red: " << static_cast<int>(red) << '\n';
    std::cout << "Green: " << static_cast<int>(green) << '\n';
    std::cout << "Blue: " << static_cast<int>(blue) << '\n';
    std::cout << "Alpha: " << static_cast<int>(alpha) << '\n';

    return 0;
}