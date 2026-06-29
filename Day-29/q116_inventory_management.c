#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice, i, len;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    while(1)
    {
        printf("\n=== String Operations ===\n");
        printf("1. Show String\n");
        printf("2. Length of String\n");
        printf("3. Reverse String\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if(choice == 4) break;
        
        if(choice == 1)
            printf("String = %s\n", str);
        
        else if(choice == 2)
        {
            len = 0;
            while(str[len] != '\0') len++;
            printf("Length = %d\n", len);
        }
        
        else if(choice == 3)
        {
            len = 0;
            while(str[len] != '\0') len++;
            printf("Reversed: ");
            for(i = len-1; i >= 0; i--)
                printf("%c", str[i]);
            printf("\n");
        }
        else
            printf("Invalid Choice!\n");
    }
    return 0;
}