#include <iostream>
#include <string>

int main() {

    int x = 5;   
    std::string y = "5";
    int z = std::stoi(y);
    std::cout << (x + z) << '\n';
    auto i = true;
    std::cout << typeid(i).name() << '\n';
    
    return 0;
}