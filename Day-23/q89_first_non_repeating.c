#include <stdio.h>

int main()
{
    char str[100];
    int i, j, found;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    for(i = 0; str[i] != '\0'; i++)
    {
        found = 0;
        for(j = 0; str[j] != '\0'; j++)
        {
            if(i != j && str[i] == str[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
        {
            printf("First non-repeating character = %c\n", str[i]);
            return 0;
        }
    }
    printf("No non-repeating character found\n");
    return 0;
}