#include <stdio.h>

int main()
{
    char str[100];
    int i, j, max_count = 0, count;
    char max_char;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
                count++;
        }
        if(count > max_count)
        {
            max_count = count;
            max_char = str[i];
        }
    }
    
    printf("Maximum occurring character = %c (%d times)\n", max_char, max_count);
    return 0;
}