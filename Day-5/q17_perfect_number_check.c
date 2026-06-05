#include <stdio.h>

int main()
{
    int num, sum = 0, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Find sum of proper divisors
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }
    
    if(sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);
    
    return 0;
}
