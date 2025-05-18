#include <iostream>


int main() {

    int num = 5 + 5; // Compile-Time

    int x = 4;
    int num1 = 5 + x; // Compile-Time OR Run-Time shayad x taghir kone

    const int point = 4;
    int num12 = 5 + point; // Compile-Time dige const hast taghir nemikone

    int y;
    std::cin >> y;
    int num2 = 9 + y; // Run-Time

    double num3 = 5.6 + 0.4; // Compile-Time

    //Chera const ? chon ehtemal dare tul barname taghir kone Run-Time hesab mishe
    // Error mide constexpr
    const int w = 50;
    constexpr int num4 = 10 + w;

    /*
    int pw = 5;
    constexpr int num5 = 5 + pw; // Error chon ehtemal in hast dar Run-Time meghdar pw taghir kone
    */

    constexpr float foo = 2.0f;
    constexpr float num6 = 0.9f + foo;


    return 0;
}