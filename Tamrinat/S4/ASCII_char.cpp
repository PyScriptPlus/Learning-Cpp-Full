#include <iostream>

int main()
{
    Again:
    std::cout << "Enter character: ";
    char y;
    std::cin >> y;

    std::cout << static_cast<int>(y) << '\n';

    std::cout << "Enter ASCII Number: ";
    int x;
    std::cin >> x;

    std::cout << static_cast<char>(x) << '\n';

    goto Again;
    
    return 0;
}
