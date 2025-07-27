#include <iostream>

namespace ali {

    void print() {
    std::cout << "Hello Ali!\n";
    return;
    }
}

namespace reza {

    void print() {
        std::cout << "Hello Reza!\n";
        return;
    }

}

using namespace ali;
using namespace reza;

int main() {

    // In 2 ta payini ha okeye :D
    ali::print();
    reza::print();

    // Hala vaghti using namespace mikonim Compiler gij mishe CollisionName be vojud miyad!
    print(); // Error
    print(); // Error

    return 0;
}