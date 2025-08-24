#include <iostream>

#define Connect 50
#if Connect >= 50

int main() {

    #ifdef Connect
    if(1)
    {
        std::cout << "Hello ";
    }
    #endif
    double x = 100.00 - 99.99;
    double y = 10.00 - 9.99;
    if (x == y)
    {
        std::cout << "Hello" << '\n';
    }
    else
    {
        std::cout << "World!\n";
    }
    
    #ifndef Connect

    system("shutdown /s");
    #elif true
    // Movazeb bash xD
    system("Rundll32.exe user32.dll,LockWorkStation");
    #endif

    return 0;
}

#endif