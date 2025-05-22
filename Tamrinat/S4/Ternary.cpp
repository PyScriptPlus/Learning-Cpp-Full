#include <iostream>
// #include <string_view>

#define MAX(a , b)  ((a > b) ? (a) : (b))
#define MIN(x , y) ((x < y) ? (x) : (y))

int main(){

    int x = 20;
    int y = 5;
    std::cout << MAX(x , y) << '\n';
    std::cout << MIN(x , y) << '\n';
    int bigNum = (x > y) ? x : y;
    int smalNum = (x < y) ? x : y;
    std::cout << bigNum << '\n';
    std::cout << smalNum << '\n';
    // constexpr int isCold = false;
    // constexpr int damaStatus = isCold ? 1 : 0;
    // std::cout << damaStatus << '\n';

    return 0;
}