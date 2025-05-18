#include <iostream>
#include <cmath>

int main(){

    double zero = 0.0;
    // inf:
    std::cout << "Inf: " << 2.0 / zero << '\n';
    // negetive inf
    double num = -3.0 / zero;
    std::cout << "Negetive inf: " << num << '\n';
    // nan
    std::cout << "nan: " << zero / zero << '\n';

    std::string d = (std::signbit(zero)) ? "Neg" : "plus";
    std::cout << d << '\n';

    return 0;
}