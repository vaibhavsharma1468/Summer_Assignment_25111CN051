#include <stdio.h>

int main()
{
    int a, b, lcm, multiple;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    // Start from the larger number
    if(a > b)
        multiple = a;
    else
        multiple = b;
    
    lcm = multiple;
    
    // Keep increasing until we find a common multiple
    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0)
        {
            break;
        }
        lcm = lcm + multiple;
    }
    
    printf("The LCM of %d and %d is %d\n", a, b, lcm);
    
    return 0;
}