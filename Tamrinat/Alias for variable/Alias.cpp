#include <iostream>
#include <iomanip>

int main() {

    typedef int mamad;
    typedef long double ld;
    
    std::cout << "Enter your age: ";
    mamad age = 18;
    // std::cin >> age;
    std::cout << "Your age is: " << age << '\n';

    ld earthToMars_km = 225000000.0;
    std::cout << std::setprecision(18);
    std::cout << sizeof(earthToMars_km) << '\n';
    std::cout << earthToMars_km << '\n';

    return 0;
}