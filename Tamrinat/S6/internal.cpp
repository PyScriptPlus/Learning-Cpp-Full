#include "internal.hpp"

void foo();
void foo1();

int main() {

    foo();
    // Error internal Linkage hast
    // foo1();

    // inline kardam dorust shod faghat dar HeaderFile mishe!!!
    foo2();

    return 0;
}