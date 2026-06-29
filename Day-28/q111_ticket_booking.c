#include <stdio.h>

int main()
{
    char name[50], train[30];
    int choice, seats = 50, book;
    
    printf("=== Ticket Booking System ===\n");
    
    while(1)
    {
        printf("\n1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if(choice == 3) break;
        
        if(choice == 1)
        {
            printf("Enter passenger name: ");
            scanf("%s", name);
            printf("Enter train name: ");
            scanf("%s", train);
            printf("How many seats? ");
            scanf("%d", &book);
            
            if(book <= seats)
            {
                seats -= book;
                printf("Ticket booked successfully for %s!\n", name);
            }
            else
                printf("Not enough seats available!\n");
        }
        else if(choice == 2)
            printf("Available seats = %d\n", seats);
        else
            printf("Invalid Choice!\n");
    }
    return 0;
}