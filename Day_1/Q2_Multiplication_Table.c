// Program 2: Multiplication table of a number
// Date: 28/05/2026

#include<stdio.h>

int main()
{
    int num, i;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    printf("\nTable of %d is:\n", num);
    
    for(i = 1; i <= 10; i = i + 1)
    {
        printf("%d * %d = %d\n", num, i, num*i);
    }
    
    return 0;
}