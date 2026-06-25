#include <stdio.h>

int main()
{
    int a[50], b[50], merge[100];
    int n1, n2, i, j = 0, k = 0;
    
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    printf("Enter %d elements (sorted):\n", n1);
    for(i = 0; i < n1; i++) scanf("%d", &a[i]);
    
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    printf("Enter %d elements (sorted):\n", n2);
    for(i = 0; i < n2; i++) scanf("%d", &b[i]);
    
    // Merge sorted arrays
    i = 0;
    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
            merge[k++] = a[i++];
        else
            merge[k++] = b[j++];
    }
    
    while(i < n1) merge[k++] = a[i++];
    while(j < n2) merge[k++] = b[j++];
    
    printf("Merged Sorted Array: ");
    for(i = 0; i < k; i++)
        printf("%d ", merge[i]);
    printf("\n");
    
    return 0;
}