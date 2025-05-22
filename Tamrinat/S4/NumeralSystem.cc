#include <iostream>
#include <bitset>

int main() {

    // Decimal: Mabnaye 10
    std::cout << "Decimal: " << 25 << '\n';
    
    // Binary: Mabnaye 2
    std::cout << "Binary: " << 0b1010010 << '\n';
 
    // Octal: Mabnaye 8
    std::cout << "Octal: " << 010 << '\n'; 

    // HexaDecimal: 
    std::cout << "HexaDecimal: " << 0xFD2;


    //--------------------------------------------------------//

    int octal = 8;
    std::cout << std::oct;
    std::cout << "Your Octal: " << octal << '\n';

    int hexa = 13;
    std::cout << std::hex;
    std::cout << "Your HexaDecimal: " << hexa << '\n';

    int defaultDecimal = 20;
    std::cout << std::dec;
    std::cout << "Your Default Number: " << defaultDecimal << '\n';

    //--------------------------------------------------------//

    // Binary:
    std::bitset<4> decimal_bin = 8;
    std::bitset<4> octal_bin = 010;
    std::bitset<8> hexadecimal_bin = 0xA2;

    std::cout << decimal_bin << '\n'
    << octal_bin << '\n'
    << hexadecimal_bin << '\n';

    std::cout << std::bitset<4>(5) << '\n';


    return 0;
}