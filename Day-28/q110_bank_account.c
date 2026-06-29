#include <stdio.h>

int main()
{
    char name[50];
    int acc_no, choice;
    float balance = 5000.0, amount;
    
    printf("=== Bank Account System ===\n");
    printf("Enter account holder name: ");
    scanf("%s", name);
    printf("Enter account number: ");
    scanf("%d", &acc_no);
    
    while(1)
    {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if(choice == 4) break;
        
        if(choice == 1)
            printf("Current Balance = Rs. %.2f\n", balance);
        
        else if(choice == 2)
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Amount deposited successfully!\n");
        }
        
        else if(choice == 3)
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if(amount <= balance)
            {
                balance -= amount;
                printf("Please collect your cash.\n");
            }
            else
                printf("Insufficient Balance!\n");
        }
        else
            printf("Invalid Choice!\n");
    }
    return 0;
}