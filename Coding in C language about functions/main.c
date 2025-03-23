#include "main.h"
#define MAMAD "Coded By MamaD"

// -------------------------------------------------------------  //
// Buffer clear mikone be dard nekhord dar inja !!!!:

// void clearInputBuffer() {
//     int c;
//     while ((c = getchar()) != '\n' && c != EOF);
// }
// -------------------------------------------------------------  //

int main() {

    // -------------------------------------------------------------  //
    // Test code:

    // int x = pow(2 , 8) - 1; //unsigned 255

    // int y = pow(-2, 8-1); //signed -128
    // int z = pow(2 , 8-1) -1; // signed ta 127


    // sin(x);
    // scanf("%d" , &x);

    // int p;
    // scanf("%d" , &p);
    // int l = pow(2 , p) -1;
    // printf("Unsigned: %d" , l);


    // printf("%d" , z);
    // printf("Your entered: %d" , x);

    // -------------------------------------------------------------  // 
    // Main code: 

    printf(MAMAD);

    printf("\nAge Unsigned mikhay vared konid adad 1 age Signed adad 2: ");
    int select;
    scanf("%d" , &select);

    if (select == 1)
    {
        unsigned_func();
    }
    else if(select == 2)
    {
        signed_func();
    }
    else
    {
        printf("The number entered is not 1 or 2\n");
    }
    

    // -------------------------------------------------------------  //
    // Failed code: 

    // if (select == 1 || select == 2)
    // {
    //     if (select == 1)
    //     {

    //         unsigned_func();

    //     }
    //     else if(select == 2)
    //     {
    //         signed_func();
    //     }
    //     // else
    //     // {
    //     //     printf("The number entered is not 1 or 2");
    //     // }  
    // }
    // else
    // {
    //     printf("The number entered is not 1 or 2");
    // }
    
    // -------------------------------------------------------------  //

    printf ("\n\nPress any key to continue . . .\n");
    getch();
    return 0;

}


