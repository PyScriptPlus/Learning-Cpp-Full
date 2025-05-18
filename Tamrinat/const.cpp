#include <iostream>

int foo() {

    return 4;

}

int main() {

    // constexpr int hello = foo(); // Error!!!
    const int x = foo();
    std::cout << x;

    return 0;
}