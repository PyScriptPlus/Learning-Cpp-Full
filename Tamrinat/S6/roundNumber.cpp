#include <iostream>
#include <cmath>

int main() {

    double x = 10.5;
    double y = 10.49;
    int res = round(x);
    int res2 = round(y);

    std::cout << res << '\n';
    std::cout << res2 << '\n';

    return 0;
}