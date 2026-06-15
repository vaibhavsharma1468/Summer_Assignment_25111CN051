 #include <stdio.h>

int main()
{
    int arr[50], n, i, rotations, first;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number of left rotations: ");
    scanf("%d", &rotations);
    
    rotations = rotations % n;  // To handle large rotations
    
    while(rotations > 0)
    {
        first = arr[0];
        for(i = 0; i < n-1; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[n-1] = first;
        rotations--;
    }
    
    printf("Array after left rotation: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}