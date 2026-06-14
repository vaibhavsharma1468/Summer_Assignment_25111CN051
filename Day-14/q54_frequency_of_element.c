#include <stdio.h>

int main()
{
    int arr[50], n, i, key, count = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number to find frequency: ");
    scanf("%d", &key);
    
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
            count++;
    }
    
    printf("Frequency of %d = %d\n", key, count);
    return 0;
}