#include <iostream>
// #include <algorithm>4
#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define ALI 5
// #define GADD 3

int main()
{

    
    
    int x = 20;
    int y = 10; // x == a // y == b
    // std::cout << std::max(x, y);
    
    #if defined(ALI) && ALI == 4
    
    std::cout << "False" << std::endl;

    #elif defined(ALI) && ALI == 3
    std::cout << "False" << std::endl;

    #else
    
    std::cout << "Not Finded";
    
    #endif
    // int x = 20;
    // int y = 10;

    // if (GADD == 2)
    // {
    //     std::cout << "True";
    // }
    // else
    // {
    //     std::cout << "False";
    // }
    
    // #ifdef GADD
    // std::cout << "Hello";
    // #endif

    // std::cout << "Bozorg tarin adad: " << __max(y , x) << "\n";
    // std::cout << "Kochek tarin adad: " << __min(x , y);
    return 0;

}
