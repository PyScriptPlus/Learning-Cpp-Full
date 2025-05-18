#include <iostream>
#include <cstdint>
#include <iomanip>


int main(){

    // std::cout << sizeof(wchar_t);   
    // std::cout << sizeof(long double) << '\n';
    // std::cout << sizeof(long long) << '\n';
    // std::cout << 5/2;
    // float m = 5.0f / 2.0f;
    // float s = 2.0f;
    // printf("%g" , m);
    // signed int x;
    // unsigned int y;
    // unsigned short xd;
    // std::cout << sizeof(xd) << '\n';
    // std::cout << sieof(y) << '\n';
    // unsigned char salam = 20;
    // unsigned char hello = 201;
    // std::cout << static_cast<int>(salam) - static_cast<int>(hello);
    // unsigned int xz = 5;
    // unsigned int yz = 22;
    // std::cout << xz - yz;

    // std::int32_t sl;
    // std::uint64_t ll;
    // std::cout << sizeof(std::int_fast32_t) * 8;

    //64030
    double x = 6.4030e4;
    std::cout << "Your Scientific Notation: " << x << '\n';

    //0.0078900
    double y = 7.89e-3;
    std::cout << "Your Scientific Notation: " << y << '\n';

    //600.410
    double i = 6.00410e2;
    std::cout << std::fixed << "Your Scientific Notation: " << i << '\n';
    
    // 8.002546
    double z = 800.2546;
    std::cout << std::scientific << "Scientific Notatioc: " << z << '\n';


    //inf (infinity plus)
    double inf = 6.0 / 0.0 ;
    std::cout << inf << '\n';

    //-inf (Negative infinity)
    double neginf = -6.0 / 0.0; 
    std::cout << neginf << '\n';

    // nan (Not a Number)
    double nan = 0.0 / 0.0;
    std::cout << nan << '\n';

    return 0;
}