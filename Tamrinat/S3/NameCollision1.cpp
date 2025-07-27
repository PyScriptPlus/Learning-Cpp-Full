#include <iostream>

extern void print();

namespace pr{
void print() {

    std::cout << "Hello World!" << '\n';
    return;
}
}

int main() {

    print();
    pr::print();

    return 0;
}
// Error mide tadakhol asami ya hamon NameCollision
// 2 ta print() darim
// g++ NameCollision1.cpp NameCollision2.cpp -o Collision.exe 

// Rah hal? estefade az namespace dar yeki az ina
// Mesl std has :D