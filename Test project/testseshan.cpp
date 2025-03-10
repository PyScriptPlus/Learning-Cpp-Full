// #if __cplusplus < 202002L

// #warning "Suuported"
// #else

// #warning "Bala tare"
// #endif


#include <iostream>

// #define MAX(a , b) ((a) > (b) ? (a) : (b))

// #define Meghdar  5
#define MAMAD  5

int main()
{
    // std::cout << "Supported";
    #if MAMAD == 4
    std::cout << "Hello bro";
    #elif MAMAD == 5
    std::cout << "Hi";
    #endif
    // std::cout << MAMAD;
    return 0;

}





























