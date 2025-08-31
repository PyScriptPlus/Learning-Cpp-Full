#include <stdio.h>

// Rahi nadare xDD
// Chon Scope Resolution Operator dar zaban C vojud nadare :(
int g_x;

int global()
{
    return g_x;
}

int main() {

    int g_x = 4;
    {
        ++g_x;

        int g_x = 50;
        --g_x;
        printf("%d\n", g_x);
    }
    
    printf("%d\n", g_x);
    printf("%d\n",global());
    
    

    return 0;
}