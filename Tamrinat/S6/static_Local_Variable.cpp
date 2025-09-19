#include <iostream>

int main() {

    int i = 1;
    while(i <= 10)
    {
        static int s_x = 1;
        std::cout << "Number: " << s_x << '\n';
        ++s_x;
        if (s_x == 6)
        {
            std::cout << "Last Number: " << s_x << '\n';
            break;
        }
        i++;
    }

    return 0;
}