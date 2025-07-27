// Reverse kardan masalan string ya adad
// Ba estefade az Library <algorithm>

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main() {

    std::string fname = "damaM";
    std::reverse(fname.begin(), fname.end());
    std::cout << "Your name Reverse: " << fname << '\n';


    // Ye mesal ba array makhsosan Vector
    // Fagaht code bebin lazem nist yad begiri
    // Hanoz monde be mabhas Vector ha beresim
    // Mesal mizanm faghat baraye Reverse !!!
    std::vector<int> numbers = {0 , 1 , 2 , 3 , 4 , 5};
    std::cout << "Before Reverse: " << numbers[0] << '\n';
    std::cout << "Before Reverse: " << numbers[1] << '\n';
    std::cout << "Before Reverse: " << numbers[2] << '\n';
    std::cout << "Before Reverse: " << numbers[3] << '\n';
    std::cout << "Before Reverse: " << numbers[4] << '\n';
    std::cout << "Before Reverse: " << numbers[5] << '\n';

    std::reverse(numbers.begin(), numbers.end());

    std::cout << "After Reverse: " << numbers[0] << '\n';
    std::cout << "After Reverse: " << numbers[1] << '\n';
    std::cout << "After Reverse: " << numbers[2] << '\n';
    std::cout << "After Reverse: " << numbers[3] << '\n';
    std::cout << "After Reverse: " << numbers[4] << '\n';
    std::cout << "After Reverse: " << numbers[5] << '\n';


    return 0;
}