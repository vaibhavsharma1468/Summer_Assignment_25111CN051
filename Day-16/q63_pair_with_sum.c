#include <stdio.h>

int main()
{
    int arr[50], n, i, j, sum, found = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the required sum: ");
    scanf("%d", &sum);
    
    printf("Pairs with sum %d are:\n", sum);
    
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    
    if(found == 0)
        printf("No pair found\n");
    
    return 0;
}