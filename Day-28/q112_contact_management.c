#include <stdio.h>

int main()
{
    char name[50], phone[20];
    int choice;
    
    printf("=== Contact Management System ===\n");
    
    while(1)
    {
        printf("\n1. Add New Contact\n");
        printf("2. View Contact\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if(choice == 3) break;
        
        if(choice == 1)
        {
            printf("Enter name: ");
            scanf("%s", name);
            printf("Enter phone number: ");
            scanf("%s", phone);
            printf("Contact added successfully!\n");
        }
        else if(choice == 2)
        {
            printf("Name  : %s\n", name);
            printf("Phone : %s\n", phone);
        }
        else
            printf("Invalid Choice!\n");
    }
    return 0;
}