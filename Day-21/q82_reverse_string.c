#include <stdio.h>

int main()
{
    char str[100], rev[100];
    int i, j = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Find length
    for(i = 0; str[i] != '\0'; i++);
    
    // Reverse
    for(i = i-1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';
    
    printf("Reversed string = %s\n", rev);
    return 0;
}