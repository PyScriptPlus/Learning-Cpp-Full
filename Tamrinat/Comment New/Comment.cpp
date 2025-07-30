#include <iostream>

int jam(int, int);

int main() {

    std::cout << jam(5, 5);
    
    return 0;
}

/// @brief جمع 2 عدد
/// @param x عدد اول
/// @param y عدد دوم
/// @return جمع عدد اول با عدد دوم
int jam(int x, int y) {

    return x + y;
}