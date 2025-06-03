#define MAX(x , y) ((x > y) ? x : y)
#include <iostream>

namespace mohasebe {

    int x;
    int y;

    int max()
    {
        return ((x > y) ? x : y);
    }
    int min()
    {
       return ((x < y) ? x : y);
    }
    // int MAX = (x > y) ? x : y;
    // int MIN = (x < y) ? x : y;

}

int main() {

    std::cout << "Enter your Number 1: ";
    std::cin >> mohasebe::x;
    std::cout << "Enter your Number 2: ";
    std::cin >> mohasebe::y;
    std::cout << "Big Number: " << mohasebe::max() << '\n';
    std::cout << "Small Number: " << mohasebe::min() << '\n';

    return 0;
}