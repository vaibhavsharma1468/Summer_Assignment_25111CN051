#include <stdio.h>

int main()
{
    int choice, a, b, result;
    
    while(1)
    {
        printf("\n=== Simple Calculator ===\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if(choice == 5) 
        {
            printf("Thank you!\n");
            break;
        }
        
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        
        if(choice == 1) result = a + b;
        else if(choice == 2) result = a - b;
        else if(choice == 3) result = a * b;
        else if(choice == 4) 
        {
            if(b == 0) 
            {
                printf("Cannot divide by zero!\n");
                continue;
            }
            result = a / b;
        }
        else 
        {
            printf("Invalid choice!\n");
            continue;
        }
        
        printf("Result = %d\n", result);
    }
    return 0;
}