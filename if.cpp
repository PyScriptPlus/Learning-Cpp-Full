#include <iostream>
// #define XYZ
int main()
{

    // #ifdef XYZ 
    std::cout << "TV";
    // #endif

    #if 0
    Conditional Compilation
    std::cout << "dasd";
    #endif 

    #ifndef XYZ
    #define XYZ
    std::cout << "NO";
    #endif

    #ifndef TAB
    #define TAB
    #ifndef XYZ
    std::cout << "Testing";
    #endif
    std::cout << "Kerl";
    #endif

    #ifndef TAB
    std::cout << "Dasd";
    #endif
    return 0;   

}