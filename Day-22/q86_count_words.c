#include <stdio.h>

int main()
{
    char str[200];
    int i, words = 0;
    
    printf("Enter a sentence: ");
    gets(str);   // To take full sentence with spaces
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            words++;
    }
    words++;   // Last word
    
    printf("Total words = %d\n", words);
    return 0;
}