#include <iostream>
#include <string_view>

constexpr int someFunction();

int main() {

    // int x = 50;
    // int y = 3;
    // int larg = (x > y) ? x : y;
    // int Min = (x < y) ? x : y;
    // int z = 4;
    // int larg = ((x > y) && (z > y) && (z > y) ? x : z ? z : y ? x : y);
    // std::cout << larg << '\n' << Min << '\n';

    // std::string_view returns = (x == y) ? "Fix" : "No fix";

    // std::cout << returns << '\n';


    std::cout << std::boolalpha;
    // constexpr bool isCold = 1;
    // constexpr std::string_view status = (isCold) ? "Sard hast" : "Garm hast";
    // std::cout << status << '\n';

    // if (isCold)
    // {
    //     constexpr int iden = 1;
    //     std::cout << iden << '\n';
    // }
    // else
    // {
    //     constexpr int iden = 0;
    //     std::cout << iden << '\n';
    // }
        

    constexpr bool isCold = false;

    if constexpr (isCold) {
        constexpr int status = 1;
    } else {
        constexpr int status = someFunction();  // ❌ someFunction() باید همون لحظه evaluable باشه!
    }
    return 0;
}

constexpr int someFunction() {

    int x = 5;
    return x;

}