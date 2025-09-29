#include <iostream>
#include <cstdint>

void Collatz(std::int64_t num)
{
    if (num != 0)
    {
        while (num != 1)
        {
            if(num % 2 == 0)
            {
                num /= 2;
            }
            else
            {
                num = (3 * num) + 1;
            }
            std::cout << "Numbers: " << num << '\n';
        }
    }
    else
    {
        std::cout << "The number cannot be 0.\n";
    }
    return;
}

int main() {

    Collatz(50);

    return 0;
}
