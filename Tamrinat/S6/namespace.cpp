#include <iostream>

// Declaretion
int doSomething(int x, int y);

namespace foo
{
    int doSomething(int x, int y) {
    return x - y;
    }    
    void scope(int x, int y) {

        std::cout << x << " - " << y << " = " <<
        doSomething(x , y) << '\n';

        // Mostaghim mire Global
        std::cout << x << " + " << y << " = " <<
        ::doSomething(x , y) << '\n';
        return;
    }
}
namespace goo
{
    int doSomething(int x, int y) {
    return x * y;
    }    
}

int doSomething(int x, int y) {
    return x + y;
}

int main() {
    
    foo::scope(5,5);
    int ret = goo::doSomething(9,9);
    std::cout << "Res: " << ret << '\n';

    return 0;
}