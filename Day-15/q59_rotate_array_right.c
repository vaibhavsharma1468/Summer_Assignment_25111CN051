#include <stdio.h>

int main()
{
    int arr[50], n, i, rotations, last;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number of right rotations: ");
    scanf("%d", &rotations);
    
    rotations = rotations % n;
    
    while(rotations > 0)
    {
        last = arr[n-1];
        for(i = n-1; i > 0; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = last;
        rotations--;
    }
    
    printf("Array after right rotation: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}