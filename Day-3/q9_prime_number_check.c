#include <stdio.h>

int main()
{
    int number, divisor, is_prime = 1;   // 1 means prime
    
    printf("Enter a positive number: ");
    scanf("%d", &number);
    
    // Numbers less than 2 are not prime
    if(number < 2)
    {
        printf("%d is not a prime number.\n", number);
        return 0;
    }
    
    // Check for factors from 2 to number/2
    for(divisor = 2; divisor <= number/2; divisor++)
    {
        if(number % divisor == 0)
        {
            is_prime = 0;     // Not prime
            break;
        }
    }
    
    if(is_prime == 1)
        printf("%d is a Prime Number.\n", number);
    else
        printf("%d is not a Prime Number.\n", number);
    
    return 0;
}
