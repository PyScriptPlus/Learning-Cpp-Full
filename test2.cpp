#include <iostream>
#include <string>

extern std::string getName();

int main()
{

    std::string x = getName();
    std::cout << "Your Name is: " << x;
    return 0;
    

}