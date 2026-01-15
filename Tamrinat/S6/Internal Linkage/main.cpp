#include <iostream>

static int g_x = 5;
int func(int x);

int main() {

    std::cout << g_x << '\n';
    func(5); // Error Linker

    return 0;
}