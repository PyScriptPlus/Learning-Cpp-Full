#include <iostream>

int main() {

    // OR ||:
    std::cout << "OR: " << '\n';
    std::cout << (true || true) << '\n';
    std::cout << (true || false) << '\n';
    std::cout << (false || true) << '\n';
    std::cout << (false || false) << '\n';

    // AND &&:
    std::cout << "AND: " << '\n';
    std::cout << (true && true) << '\n';
    std::cout << (true && false) << '\n';
    std::cout << (false && true) << '\n';
    std::cout << (false && false) << '\n';

    return 0;
}