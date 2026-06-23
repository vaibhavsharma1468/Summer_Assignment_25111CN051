#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0, isPalindrome = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Find length
    for(i = 0; str[i] != '\0'; i++)
        len++;
    
    // Check palindrome
    for(i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-1-i])
        {
            isPalindrome = 0;
            break;
        }
    }
    
    if(isPalindrome == 1)
        printf("%s is Palindrome\n", str);
    else
        printf("%s is not Palindrome\n", str);
    
    return 0;
}