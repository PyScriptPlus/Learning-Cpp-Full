#include <stdio.h>
#include <stdbool.h>

bool testing(int , int);

int main()
{

    bool salam = true;
    salam = false;
    printf("%d" ,salam);
    printf("\n");
    int x = 5;
    int y = 5;

    printf("%d" , testing(x , y));
    return 0;


}

bool testing(int x , int y){

    return x == y;

}