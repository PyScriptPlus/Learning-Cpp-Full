#include <stdio.h>

int factorial(int x) {

    if(x == 0)
    {
        return 1;
    }
    int res = factorial(x - 1) * x;
    printf("Result: %d\n", res);
    return res;
}

int main() {

    factorial(5);

    return 0;
}