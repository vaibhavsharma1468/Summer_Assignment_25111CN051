#include <stdio.h>

int main()
{
    int arr[50], n, i, largest, second_largest;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    largest = second_largest = arr[0];
    
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    
    printf("Second Largest element = %d\n", second_largest);
    return 0;
}