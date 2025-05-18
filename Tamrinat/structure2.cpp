#include <iostream>
#include <vector>
#include <string>
#include <string_view>

struct Cars
{
    std::vector<std::string> carNames = {"BMW" , "Benz" , "G-Class" , "Lamborghini"};
};

int main() {

    Cars names;

    for(std::string_view name : names.carNames)
    {
        std::cout << "Car names: " << name << '\n';
    }

    return 0;
}