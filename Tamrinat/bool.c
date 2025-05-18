#include <stdio.h>
#include <stdbool.h>

char *weatherStatus(bool isCold);

int main()
{
    printf("Enter dama: ");
    int dama;
    scanf("%d" , &dama);
    bool isCold;

    if (dama <= 15)
    {
        isCold = true;
    }
    else
    {
        isCold = false;
    }
    
   

    printf("%s" , weatherStatus(isCold));

    return 0;
}

char *weatherStatus(bool isCold){

    return (isCold) ? "Sard" : "Garm";

}