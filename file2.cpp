#include <iostream>


extern int x;
extern std::string y;

// const int s = 320;   

void shafaei()
{

    std::cout << "Your Age: " << x << "\n" << "Your Names: " << y;
    return;

}

int main()
{
    
    shafaei();
    return 0;

}