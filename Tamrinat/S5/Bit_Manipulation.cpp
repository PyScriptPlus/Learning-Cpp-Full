#include <iostream>
#include <bitset>

int main() {

    std::bitset<4> flags = 0b1010;
    // 4 Functions
    // test()
    // set()
    // reset()
    // flip()

    std::cout << "Bit Position 0: " << flags.test(0) << '\n';
    std::cout << "Bit Position 3: " << flags.test(3) << '\n';
    flags.set(0);
    std::cout << "Bit Position 0: " << flags.test(0) << '\n';
    flags.reset(3);
    std::cout << "Bit Position 3: " << flags.test(3) << '\n';
    std::cout << "Bit Position 1: " << flags.test(1) << '\n';
    flags.flip(1);
    std::cout << "Bit Position 1: " << flags.test(1) << '\n';
    flags.flip(1);
    std::cout << "Bit Position 1: " << flags.test(1) << '\n';
    
    return 0;
}