#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Character Frequency:\n");
    
    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        if(str[i] != '\0')
        {
            for(j = 0; str[j] != '\0'; j++)
            {
                if(str[i] == str[j])
                    count++;
            }
            if(count > 0)
            {
                printf("%c : %d\n", str[i], count);
                str[i] = '\0';   // To avoid printing same char again
            }
        }
    }
    return 0;
}