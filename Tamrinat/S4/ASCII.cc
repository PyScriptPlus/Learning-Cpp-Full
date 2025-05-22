#include <iostream>


int main() {

    char mmd = 'a';
    char mmde = 97;
    int kilo = mmd;
    std::cout << "Implicit: " << kilo << '\n'; 
    int keylo = static_cast<int>(mmd);
    std::cout << "Explicit: " << keylo << '\n';
    std::cout << mmde << '\n';
    

    return 0;
}