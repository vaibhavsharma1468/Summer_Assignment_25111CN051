#include <stdio.h>

int main()
{
    int base, exp, result = 1, i;
    
    printf("Enter base: ");
    scanf("%d", &base);
    
    printf("Enter exponent: ");
    scanf("%d", &exp);
    
    for(i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    
    printf("%d^%d = %d\n", base, exp, result);
    return 0;
}