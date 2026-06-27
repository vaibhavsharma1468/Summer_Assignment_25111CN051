#include <stdio.h>

int main()
{
    int choice, amount;
    int balance = 5000;   // Initial balance
    
    printf("Welcome to ATM\n");
    
    while(1)
    {
        printf("\n1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if(choice == 1)
            printf("Your balance = Rs. %d\n", balance);
        
        else if(choice == 2)
        {
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if(amount <= balance)
            {
                balance = balance - amount;
                printf("Please collect your money.\n");
            }
            else
                printf("Insufficient Balance!\n");
        }
        
        else if(choice == 3)
        {
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            balance = balance + amount;
            printf("Money deposited successfully.\n");
        }
        
        else if(choice == 4)
        {
            printf("Thank you for using ATM.\n");
            break;
        }
        else
            printf("Invalid Choice!\n");
    }
    return 0;
}