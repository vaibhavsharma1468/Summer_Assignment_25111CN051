#include<stdio.h>

int main()
{
    int n, product = 1, temp;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    temp = n;
    
    while(n > 0)
    {
        product = product * (n % 10);
        n = n / 10;
    }
    
    printf("Product of digits of %d is %d\n", temp, product);
    return 0;
}