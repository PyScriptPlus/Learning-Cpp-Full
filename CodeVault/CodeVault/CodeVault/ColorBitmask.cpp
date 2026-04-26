#include <iostream>
#include <cstdint>

// Ye mesal vagheyi ke dar onja az BitManipulation estefade mikonim
// Va hata estefade az Bitmask baraye chand bit ham estefade shode ast
// Code payin negah kon: tozihat kamel code toye daftar hast
// Chon tolanie naneveshtam toye daftar :)

// Barname chikar mikone: Miad vaghti karbar code rangi mide Hexadecimal
// Mesal 00FF00FF
// Tashkhis mide in Hexa kodum male rang Red kodum green va ...
// Baraye استخراج rang az ye aks ya TV ya harchi tasviri
// In Barname be dard mikhore onjur jaha

int main() {

	constexpr std::uint32_t redMask = 0xFF000000;
	constexpr std::uint32_t greenMask = 0x00FF0000;
	constexpr std::uint32_t blueMask = 0x0000FF00;
	constexpr std::uint32_t alphaMask = 0x000000FF;

	std::cout << "Enter hex color 32Bit: ";
	std::uint32_t pixel;
	std::cin >> std::hex >> pixel;

	std::uint8_t red = static_cast<std::uint8_t>((pixel & redMask) >> 24);
	// Pixel karbar mesal: FF00FFFF
				//redMask: FF000000
				//Output:  FF000000
	std::uint8_t green = static_cast<std::uint8_t>((pixel & greenMask) >> 16);
	std::uint8_t blue = static_cast<std::uint8_t>((pixel & blueMask) >> 8);
	std::uint8_t alpha = static_cast<std::uint8_t>(pixel & alphaMask);

	// To in adad hasho neshon mide
	std::cout << "Decimal: " << '\n';
	std::cout << "Red: " << static_cast<int>(red) << '\n';
	std::cout << "Green: " << static_cast<int>(green) << '\n';
	std::cout << "Blue: " << static_cast<int>(blue) << '\n';
	std::cout << "Alpha: " << static_cast<int>(alpha) << '\n';

	// Mitunim std::cout ham tabdil konim hex neshon bede
	std::cout << "\nHexadecimal: " << std::hex << '\n';
	std::cout << "Red: " << static_cast<int>(red) << '\n';
	std::cout << "Green: " << static_cast<int>(green) << '\n';
	std::cout << "Blue: " << static_cast<int>(blue) << '\n';
	std::cout << "Alpha: " << static_cast<int>(alpha) << '\n';

	return 0;
}