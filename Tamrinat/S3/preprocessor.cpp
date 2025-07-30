#include <iostream>

// Preprocessor: Syntax
// start with # dont write ( ; )

// Function-Like Macro:
#define print_cpp(str) std::cout << str << '\n' 
// Object-Like Macro:
#define MAX_UINT8 255
#define MAMAD "Coded By MamaD"
#define OKEY

int main() {

    print_cpp(MAMAD);
    print_cpp("Hello World!");
    std::cout << MAX_UINT8 << '\n';

    #pragma region ifdef
    #ifdef OKEY 

    print_cpp("Run");

    #endif
    #pragma endregion

    #pragma region ifndef
    #ifndef OKEY

    "Dont run!!!";

    #endif
    #pragma endregion
    #pragma region ifndef2
    #ifndef NO 

    print_cpp("Run");

    #endif
    #pragma endregion

    #pragma region if
    #if 5 > 2

    print_cpp("Run");

    #endif
    #pragma endregion
    #pragma region if2
    #if 5 < 2

    "Dont run!!!";

    #endif
    #pragma endregion
    #pragma region if3
    #if 0

    Comment :D

    #endif
    #pragma endregion
    

    return 0;
}