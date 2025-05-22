#include <iostream>

int main() {
    
    auto s = "Salam";
    std::cout << s << '\n';
    std::cout << typeid(s).name() << '\n';
    
    return 0;
}