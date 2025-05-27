#include <iostream>

int main() {

    int x = 5;
    x += 2;
    std::cout << (x-=2) << '\n';

    if (!x)
    {
        std::cout << (x+=2) << '\n';
    }
    else
    {
        int num = (!false) ? x+=100 : x+=54;
        std::cout << num << '\n';
    }

    
    


    return 0;
}