#include <iostream>
#include <string>

int main() {

    int x = 5;
    std::string num = "5";
    int convert = std::stoi(num);
    if (x == convert)
    {
        std::cout << "Equal to" << '\n';
    }
    if (x >= convert)
    {
        std::cout << "is Grether Than" << '\n';
    }
    if (x <= convert)
    {
        std::cout << "is Less Than" << '\n';
    }
    if (x != convert)
    {
        std::cout << "is Not Equal to" << '\n';
    }
    
    
    


    return 0;
}