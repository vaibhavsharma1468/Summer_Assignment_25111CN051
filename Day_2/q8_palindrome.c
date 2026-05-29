#include<stdio.h>

int main()
{
    int n, original, rev = 0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    original = n;
    
    while(n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    
    if(original == rev)
        printf("%d is Palindrome\n", original);
    else
        printf("%d is not Palindrome\n", original);
    
    return 0;
}

