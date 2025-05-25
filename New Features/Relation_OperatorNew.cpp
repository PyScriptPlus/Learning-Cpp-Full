// Just Run project with C++20 OR up standard C++20
#include <iostream>
#include <format>

int main() {

    // In Relation Ship jadid az C++20 be baad moarefi shod!!
    // std::format ham az C++20 be baad moarefi shod!!
    int x = 5;
    int y = 12;
    auto i = x <=> y;
    if (i < 0)
    {
        std::cout << std::format("In adad {} bozorg tar az {} ast", y, x);
    }
    else if(i > 0)
    {
        std::cout << std::format("In adad {} bozorg tar az {} ast", x, y);
    }
    else if(i == 0)
    {
        std::cout << std::format("In adad {} barabar ba {} ast", x, y);
    }
    


    return 0;
}