#include<stdio.h>

int main()
{
    int n, sum = 0, temp;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    temp = n;
    
    while(n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    
    printf("Sum of digits of %d is %d\n", temp, sum);
    return 0;
}