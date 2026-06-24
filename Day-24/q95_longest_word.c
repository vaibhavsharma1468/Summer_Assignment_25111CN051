#include <stdio.h>

int main()
{
    char str[200], word[50], maxword[50];
    int i = 0, j = 0, max_len = 0, len = 0;
    
    printf("Enter a sentence: ");
    gets(str);
    
    while(str[i] != '\0')
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            word[j] = '\0';
            if(len > max_len)
            {
                max_len = len;
                strcpy(maxword, word);
            }
            j = 0;
            len = 0;
        }
        else
        {
            word[j++] = str[i];
            len++;
        }
        i++;
    }
    
    printf("Longest word is: %s\n", maxword);
    return 0;
}