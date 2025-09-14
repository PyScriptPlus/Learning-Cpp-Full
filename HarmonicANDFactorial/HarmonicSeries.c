#include <stdio.h>

int main() {

    printf("Enter number: ");
    double x;
    scanf("%lf", &x);
    double i = 1;
    double res = 0;
    while(i <= x)
    {
        res += (1 / i);
        printf("Result: %lf\n", res);
        i++;
    }
    
    return 0;
}