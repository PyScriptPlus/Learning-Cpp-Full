#include <stdio.h>
#include "internal.h"

int g_x;

int main() {

    printf("%d\n", g_x);
    g_x = addition(9 , 1);
    printf("%d\n", g_x);

    return 0;
}