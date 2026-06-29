#include <stdio.h>

int main()
{
    int arr[50], n, i, choice, sum = 0, max;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    while(1)
    {
        printf("\n=== Array Operations ===\n");
        printf("1. Display Array\n");
        printf("2. Sum of Array\n");
        printf("3. Find Maximum\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if(choice == 4) break;
        
        if(choice == 1)
        {
            printf("Array: ");
            for(i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        }
        else if(choice == 2)
        {
            sum = 0;
            for(i = 0; i < n; i++) sum += arr[i];
            printf("Sum = %d\n", sum);
        }
        else if(choice == 3)
        {
            max = arr[0];
            for(i = 1; i < n; i++)
                if(arr[i] > max) max = arr[i];
            printf("Maximum = %d\n", max);
        }
        else
            printf("Invalid Choice!\n");
    }
    return 0;
}