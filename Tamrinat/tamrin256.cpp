#include <iostream>
#include <climits>
#include <cfloat>
#include <limits>
#include <cstdint>
#include <atomic>

// In headerFile asli typeid().name() hast:
#include <typeinfo>
// Barresi mikonim aya size int 4Byte hast ya kheyr age nabashe Error mide 
// Dar zaman CompileTime
static_assert(sizeof(int)==4, "sizeof(int) too small");

// Tarif Variable iman kheyli amn hast
std::atomic<int> x = 5;

int main() {

    std::cout << x << '\n';
    
    std::cout << std::numeric_limits<int>::max() << '\n';
    std::cout << std::numeric_limits<int>::min() << '\n';
    std::cout << std::numeric_limits<std::int16_t>::min() << '\n';
    std::cout << INT8_MAX << '\n';
    std::cout << INT8_MIN << '\n';
    std::cout << UINT8_MAX << '\n';
    

    return 0;

}
