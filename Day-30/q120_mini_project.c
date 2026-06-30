#include <stdio.h>

int main()
{
    char names[10][50];
    int roll[10], marks[10];
    int n, i, choice;
    
    printf("=== Student Management Mini Project ===\n");
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i+1);
        printf("Name: ");
        scanf("%s", names[i]);
        printf("Roll No: ");
        scanf("%d", &roll[i]);
        printf("Marks: ");
        scanf("%d", &marks[i]);
    }
    
    while(1)
    {
        printf("\n1. Show All Students\n");
        printf("2. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if(choice == 2) break;
        
        if(choice == 1)
        {
            printf("\n--- Student List ---\n");
            for(i = 0; i < n; i++)
            {
                printf("Roll: %d | Name: %s | Marks: %d\n", roll[i], names[i], marks[i]);
            }
        }
    }
    printf("Thank you!\n");
    return 0;
}