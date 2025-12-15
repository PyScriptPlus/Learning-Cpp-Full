#include <iostream>

int main() {

    int x = 50;
    std::cout << x << '\n';
    std::cout << &x << '\n'; // Address Of
    std::cout << *(&x) << '\n'; // derefrence


    // pointer
    //----------------------//
    int y = 4;
    int& ref = y;
    int* ptr = &ref; 
    // ptr eshare mikone be address ref 
    // ref ham address variable y negah dashte !!!
    //----------------------//

    std::cout << *ptr << '\n'; // Farghi nadare
    ptr = &y;
    std::cout << *ptr << '\n'; // Farghi nadare
    ref = 90;
    std::cout << *ptr << '\n'; 
    y = 100;
    ptr = &y;
    std::cout << *ptr << '\n'; 


    int p = 54;
    ptr = &p;
    std::cout << p << '\n' << *ptr << '\n';

    *ptr = 5;

    std::cout << p << '\n' << *ptr << '\n';


    
    ptr = nullptr;
    if(!ptr)
    {
        std::cout << "Null hast!!!\n";
    }


    return 0;
}