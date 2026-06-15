#include <stdio.h>

int main()
{
    int arr[50], n, i, count = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // Move non-zero elements to front
    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }
    
    // Fill remaining positions with zeroes
    while(count < n)
    {
        arr[count] = 0;
        count++;
    }
    
    printf("Array after moving zeroes to end: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}