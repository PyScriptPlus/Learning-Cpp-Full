#include <iostream>
#include <cstdint>

void funcbool(bool, bool, bool, bool, bool, bool, bool, bool);
void funcbit(std::uint8_t);

namespace opts {
    // Ina ke constexpr hast in 8Bit ha hichja zakhire nemishan
    // Faghat meghdareshon jaygozin jayi mishe ke estefade mikonim :)
    // Mesal: opt |= opt1; miad injuri mikone opt |= 0x01;
    // Yani khodaye behine :)
    constexpr std::uint8_t opt1 = 0x01;
    constexpr std::uint8_t opt2 = 0x02;
    constexpr std::uint8_t opt3 = 0x04;
    constexpr std::uint8_t opt4 = 0x08;
    constexpr std::uint8_t opt5 = 0x10;
    constexpr std::uint8_t opt6 = 0x20;
    constexpr std::uint8_t opt7 = 0x40;
    constexpr std::uint8_t opt8 = 0x80;
}

int main() {
    
    // Opt1 = True, Opt3 = True, Opt5 = true, Opt8 = True
    funcbool(true, false, true,false,true,false,false,true);
    
    // In behine tar hast nesbat be Boolean
    std::uint8_t options = (opts::opt1 | opts::opt3 | opts::opt5 | opts::opt8);
    funcbit(options);
    
    return 0;
}

void funcbool(bool opt1, bool opt2, bool opt3, bool opt4, bool opt5,
    bool opt6, bool opt7, bool opt8) {
    std::cout << opt1 << '\n';
    std::cout << opt2 << '\n';
    return;
}

void funcbit(std::uint8_t options) {
    std::cout << (static_cast<bool>(options & opts::opt1) ? "ON\n" : "OFF\n");
    return;
}


