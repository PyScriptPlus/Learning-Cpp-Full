#include <iostream>
#include "Logical_create.hpp"

int main() {

    if (NOT(true AND false))
    {
        std::cout << ":D" << '\n';
    }
    if (false OR true)
    {
        std::cout << "xD" << '\n';
    }
    
     
    return 0;
}