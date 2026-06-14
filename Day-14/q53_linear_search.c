#include <stdio.h>

int main()
{
    int arr[50], n, i, key, found = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number to search: ");
    scanf("%d", &key);
    
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("%d found at position %d\n", key, i+1);
            found = 1;
            break;
        }
    }
    
    if(found == 0)
        printf("%d not found in array\n", key);
    
    return 0;
}