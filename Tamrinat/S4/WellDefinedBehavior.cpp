#include <iostream>
#include <climits>

// Raftar ta'rif shode

int main() {

    unsigned int x = 3;
    unsigned int y = 4;
    std::cout << "Well Defined: " << (x - y) << '\n';
    std::cout << "UINT_Max: " << UINT_MAX << '\n';
    unsigned short i = 5;
    unsigned short z = 6;
    unsigned short m = i - z;
    std::cout << "Well Defined: " << m << '\n';
    std::cout << "UShort_Max: " << USHRT_MAX << '\n';

    return 0;
}