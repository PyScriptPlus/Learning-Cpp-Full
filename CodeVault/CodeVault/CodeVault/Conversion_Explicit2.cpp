#include <iostream>
#include <cstdint>

// Dar in code payini vaghti mikhaym yek unsigned 
// Ro be signed tabdil konim agar adad on unsigned bishtar 
// Az on signed bashad moshkel miyare ke payin neveshtam
// Undefined Behavior ( UB ) be vojud miyare
int main() {

    std::uint16_t x = 65535;
    std::cout << static_cast<std::int16_t>(x) << '\n';

    std::uint16_t y = 65534;
    std::cout << static_cast<std::int16_t>(y) << '\n';

    std::cout << -65536 % -65535 << '\n';
    std::cout << -65536 % -65534 << '\n';
    return 0;

}