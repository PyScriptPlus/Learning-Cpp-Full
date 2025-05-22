#include <iostream>
#include <cstdlib>

int main() {

    srand(time(NULL));
    for (int i = 0; i <= 5; i++)
    {
        std::cout << rand() << '\n';
    }
    
    

    return 0;
}