#include <stdio.h>

int main()
{
    int arr[50], n, i, j, max_count = 0, max_element;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++)
    {
        int count = 0;
        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > max_count)
        {
            max_count = count;
            max_element = arr[i];
        }
    }
    
    printf("Element with maximum frequency is %d (appears %d times)\n", max_element, max_count);
    return 0;
}