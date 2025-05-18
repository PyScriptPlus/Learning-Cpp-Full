#include <stdio.h>

int main() {

    // int x = 6; // 00000110
    // int y = 12;// 00001100
    // int z = 0; // 00000000


    // z = x & y;
    // printf("AND %d\n", z);

    // z = x | y;
    // printf("OR %d\n", z);
    
    // z = x ^ y;
    // printf("XOR %d\n", z);
   
    
    int result;

    asm(
        "movl $10, %%eax;\n"
        "movl $2, %%ebx;\n"
        "addl %%ebx, %%eax;"
        "movl %%ebx, %0;\n"
        : "=r" (result)
        :
        : "%eax", "%ebx"

    );
    fprintf(stdout, "Hello\n");
    printf("Result: %d\n", result);


    return 0;
}