#include <iostream>
#include <bitset>

int main() {


    std::bitset<8> mybit = 0b0000'1010;
    // mybit.set(0);
    // mybit.reset(1);

    std::cout << "My Bit: " << mybit << '\n';
    std::cout << "Bit 1: " << mybit.test(1) << '\n';
    std::cout << "Bit 0: " << mybit.test(0) << '\n';
    std::cout << "Bit: " << mybit.count() << '\n';
    std::cout << "Bit: " << mybit.size() << '\n';
    std::cout << "All bit: " << mybit.all() << '\n';

    std::bitset<4> mybit2 = 0b1111;
    std::cout << "All bit: " << mybit2.all() << '\n';
    std::cout << "Bit: " << mybit2.count() << '\n';
    std::cout << "Bit: " << mybit2.size() << '\n';

    mybit2.flip(2);
    std::cout << "All bit: " << mybit2.all() << '\n';
    std::cout << "Bit: " << mybit2.count() << '\n';
    std::cout << "Bit: " << mybit2.size() << '\n';

    return 0;
}