// Program 1: Sum of first N natural numbers
// Date: 28/05/2026

#include<stdio.h>

int main()
{
    int n, sum = 0;
    int i;
    
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i = i + 1)
    {
        sum = sum + i;
    }
    
    printf("The sum is = %d\n", sum);
    
    return 0;
}