#include "main.h"

void unsigned_func() {
    printf("Enter your bit between these numbers (Unsigned): 8 | 16 | 32 : ");
    int long long numberBit;
    scanf("%lld" , &numberBit); // lld gozashtam chon int long long hast age long khali bod %d
    // clearInputBuffer();
    int long long formul = pow(2 , numberBit) -1;
    if (numberBit == 8 || numberBit == 16 || numberBit == 32)
    {
        printf("You can store these numbers in Unsigned %lu bit: 0 ta %lu" , numberBit , formul);
    }
    else
    {
        printf("The entered bit was not between these numbers: 8 / 16 / 32 ");
    }
    
    return;
}

void signed_func() {
    printf("Enter your bit between these numbers (Signed): 8 | 16 | 32 : ");
    int long long numberBit;
    scanf("%lld" , &numberBit); // lld gozashtam chon int long long hast age long khali bod %d
    // clearInputBuffer();
    int long long formul1 = pow(-2 ,numberBit -1);
    int long long formul2 = pow(2 , numberBit - 1) - 1;

    if (numberBit == 8 || numberBit == 16 || numberBit == 32)
    {
        printf("You can store these numbers in Signed %lu bit: %d ta %lu" , numberBit , formul1 , formul2);    
    }
    else
    {
        printf("The entered bit was not between these numbers: 8 / 16 / 32 ");
    }

    return;

}