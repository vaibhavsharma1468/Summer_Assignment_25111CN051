#include <stdio.h>

int main()
{
    int arr[50], n, key, i, low, high, mid, found = 0;
    
    printf("Enter size of array: "); scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    printf("Enter number to search: "); scanf("%d", &key);
    
    low = 0; high = n-1;
    
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == key)
        {
            printf("%d found at position %d\n", key, mid+1);
            found = 1;
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    if(found == 0)
        printf("%d not found\n", key);
    
    return 0;
}