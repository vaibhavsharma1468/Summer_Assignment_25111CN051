#include <stdio.h>

int main()
{
    char book[50], student[50];
    int choice, copies;
    
    printf("=== Library Management System ===\n");
    
    while(1)
    {
        printf("\n1. Add New Book\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if(choice == 4) break;
        
        if(choice == 1)
        {
            printf("Enter book name: ");
            scanf("%s", book);
            printf("Book added successfully!\n");
        }
        else if(choice == 2)
        {
            printf("Enter student name: ");
            scanf("%s", student);
            printf("Enter book name: ");
            scanf("%s", book);
            printf("Book issued to %s\n", student);
        }
        else if(choice == 3)
        {
            printf("Enter book name: ");
            scanf("%s", book);
            printf("Book returned successfully!\n");
        }
        else
            printf("Invalid Choice!\n");
    }
    return 0;
}