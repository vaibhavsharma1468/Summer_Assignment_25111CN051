#include <stdio.h>

int main()
{
    int low, high, i, num, rem, sum, original;
    
    printf("Enter starting number: ");
    scanf("%d", &low);
    
    printf("Enter ending number: ");
    scanf("%d", &high);
    
    printf("Armstrong numbers between %d and %d are:\n", low, high);
    
    for(i = low; i <= high; i++)
    {
        num = i;
        original = i;
        sum = 0;
        
        while(num > 0)
        {
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }
        
        if(original == sum)
            printf("%d ", i);
    }
    
    printf("\n");
    return 0;
}