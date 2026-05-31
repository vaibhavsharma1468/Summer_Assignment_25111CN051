#include <stdio.h>

int main()
{
    int n, i, first = 0, second = 1, next;
    
    printf("Enter the term number (n): ");
    scanf("%d", &n);
    
    if(n == 1)
    {
        printf("1st Fibonacci term is 0\n");
        return 0;
    }
    if(n == 2)
    {
        printf("2nd Fibonacci term is 1\n");
        return 0;
    }
    
    for(i = 3; i <= n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }
    
    printf("%dth Fibonacci term is %d\n", n, second);
    
    return 0;
}
