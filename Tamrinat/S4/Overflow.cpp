#include <iostream>

int main() {

    unsigned short num;
    num = 65535;
    std::cout << num << '\n'; // 65535
    num = 65536;
    std::cout << num << '\n'; // 0
    num = 65537;
    std::cout << num << '\n'; // 1
    num = 65538;
    std::cout << num << '\n'; // 2
    num = 65539;
    std::cout << num << '\n'; // 3

    // Why? 0, 1, 2, 3 
    // Overflow hast 
    // Va chera 0 1 2 3 hala?
    // In miad ye taghsim Modolus mikone ba 
    // 65535 + 1 
    // Ke miad 0 or 1 or 2 and .....

    // Mesal:
    std::cout << (65536 % (65535 + 1)) << '\n';
    std::cout << (65537 % (65535 + 1)) << '\n';
    std::cout << (65538 % (65535 + 1)) << '\n';
    std::cout << (65539 % (65535 + 1)) << '\n';


    return 0;
}