#include <stdio.h>

int main()
{
    char books[5][50] = {"C Programming", "Data Structures", "Python", "Java", "DBMS"};
    int choice, i;
    
    printf("=== Mini Library System ===\n");
    
    while(1)
    {
        printf("\n1. Show All Books\n");
        printf("2. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if(choice == 2) break;
        
        if(choice == 1)
        {
            printf("\nAvailable Books:\n");
            for(i = 0; i < 5; i++)
                printf("%d. %s\n", i+1, books[i]);
        }
        else
            printf("Invalid Choice!\n");
    }
    return 0;
}