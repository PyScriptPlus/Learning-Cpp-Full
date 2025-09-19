#include <iostream>
#include "Behine.hpp"

int main() {
    using std::cout, std::cin;

    cout << "Enter a radius: ";
    double radius;
    cin >> radius;

    std::cout << "This circumference is: " << 
            (2.0 * radius * constantValue::pi) << '\n';

    //--------------------------------------------------------//

    double gravity = constantValue::myGravityGame;
    ++gravity;
    gravity -= 0.1;
    std::cout << "The gravity of this game is equal to: " << gravity << '\n';

    return 0;
}