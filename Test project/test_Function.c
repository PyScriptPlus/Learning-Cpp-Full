#include <stdio.h>

#define MIN(x , z) ((x) < (z) ? (x) : (z))

void mamad(int time);

int main()
{


    int x = 10;
    int a = 58;
    int y = MIN(a , x);
    printf("%d" , y);


    // mamad(5);
    return 0;

}


void mamad(int time)
{
    for (int i = 0; i <= time; i++)
    {
        printf("Your number is %d\n", i);
    }
    
    return;

}