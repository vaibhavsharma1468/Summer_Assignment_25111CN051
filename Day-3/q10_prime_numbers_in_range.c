#include <stdio.h>

int main()
{
    int start, end, i, j, isPrime;
    
    // Taking input from user
    printf("Enter starting number: ");
    scanf("%d", &start);
    
    printf("Enter ending number: ");
    scanf("%d", &end);
    
    printf("\nPrime numbers between %d and %d are:\n", start, end);
    
    // Outer loop to check each number in range
    for(i = start; i <= end; i++)
    {
        // Numbers less than 2 are not prime
        if(i < 2)
            continue;
        
        isPrime = 1;   // Assume current number is prime
        
        // Check if number is divisible by any number from 2 to i/2
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;   // Not prime
                break;
            }
        }
        
        // If still prime, print it
        if(isPrime == 1)
        {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}