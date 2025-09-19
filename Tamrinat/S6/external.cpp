#include <iostream>

extern int g_x;
extern const double g_pi;

namespace foo
{
    extern const int age;
    int sendNumber();
}

int main() {

    std::cout << "Num1: " << g_x << '\n';
    std::cout << "Num2: " << g_pi << '\n';

    std::cout << "My age: " << foo::age << '\n';

    for (int i = 0; i <= foo::sendNumber(); i++)
    {
        std::cout << i << '\n';
    }
    

    return 0;
}