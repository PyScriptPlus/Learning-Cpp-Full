#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int main() {

    assert(0 == false);
    assert(10 == 10);
    int x;
    int y;
    scanf("%d %d", &x, &y);
    assert(x != 0);
    assert(y != 0);
    int division = x / y;

    return 0;
}