#include <stdio.h>

int main()
{
    int arr[50], n, i, j, count;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Duplicate elements are: ");
    
    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
        if(count > 0)
            printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}