#include <stdio.h>

int main()
{
    int num, original, rem, fact, sum = 0, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    
    while(num > 0)
    {
        rem = num % 10;
        fact = 1;
        
        // Calculate factorial of digit
        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        
        sum = sum + fact;
        num = num / 10;
    }
    
    if(original == sum)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is not a Strong Number.\n", original);
    
    return 0;
}