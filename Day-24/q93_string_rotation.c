#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    if(strlen(str1) != strlen(str2))
    {
        printf("Not Rotation\n");
        return 0;
    }
    
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);
    
    if(strstr(temp, str2) != NULL)
        printf("Strings are Rotation of each other\n");
    else
        printf("Strings are not Rotation\n");
    
    return 0;
}