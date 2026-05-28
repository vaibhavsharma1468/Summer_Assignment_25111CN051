// Program 3: Factorial of a number
// Date: 28/05/2026

#include<stdio.h>

int main()
{
    int n, i;
    long factorial = 1;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i = i + 1)
    {
        factorial = factorial * i;
    }
    
    printf("Factorial of %d = %ld\n", n, factorial);
    
    return 0;
}