#include <stdio.h>

int main()
{
    int num1, num2, gcd, i;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Start checking from the smaller number
    if(num1 < num2)
        i = num1;
    else
        i = num2;
    
    // Find the greatest common divisor
    while(i >= 1)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            break;
        }
        i--;
    }
    
    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);
    
    return 0;
}