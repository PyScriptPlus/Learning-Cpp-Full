#include <iostream>

#define ALI
#undef ALI // Delete ALI define :D
#ifndef ALI
int main() {

    return 0;
}
#endif