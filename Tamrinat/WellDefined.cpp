#include <iostream>
#include <climits>

int main(){

    unsigned int num1 = 5;
    unsigned int num2 = 3;
    std::cout << num2 - num1 << '\n'; // Output --> 4294967294
    // Adad tarif shode neshon mide
    // Adad ajib gharib nist tarif shode hast Well-Defined hast
    // Dar season 4 neveshte bodam UB hast vali ba tahgig intor nist

    // Har bar Debug koni hamon Output mide vali dar UB ye adad ajib gharib 
    // Va motafavet mide ba har Debug dobare 
    // Vali in tarif shode hast --> 4294967294

    // In adad Unsigned int_max hast 4294967294 :)
    // Include kon climits or limits.h
    std::cout << "Unsigned MaxNumber: " << UINT_MAX << '\n';
    // Hamin Output mide :D 4294967294
    
    // To in library hameye number ha hastan mesl:
    // uint8_min or max int32_max or min
    // ya hata fast va least

    return 0;
}