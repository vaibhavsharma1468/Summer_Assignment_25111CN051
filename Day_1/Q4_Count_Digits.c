// Program 4: Count digits in a number
// Date: 28/05/2026

#include<stdio.h>

int main()
{
    int number, count = 0;
    int temp;
    
    printf("Enter any number: ");
    scanf("%d", &number);
    
    temp = number;
    
    while(number > 0)
    {
        number = number / 10;
        count = count + 1;
    }
    
    printf("Total digits in %d = %d\n", temp, count);
    
    return 0;
}