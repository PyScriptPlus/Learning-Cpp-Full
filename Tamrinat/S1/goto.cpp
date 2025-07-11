#include <iostream>

int main() {

    mohammad:
    static int x = 0;
    ++x;
    // std::cout << x << '\n';
    if (x < 5)
    {
        std::cout << "Hello Mohammad!" << '\n';
        goto mohammad;
    }
    else
    {
        std::cout << "Finish!" << '\n';
    }
    
    // system("pause");
    std::cout << "Press any key to continue . . .";
    std::cin.get();


    return 0;
}