#include <stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int n1, n2, i, k = 0;
    
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d numbers:\n", n1);
    for(i = 0; i < n1; i++) scanf("%d", &a[i]);
    
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d numbers:\n", n2);
    for(i = 0; i < n2; i++) scanf("%d", &b[i]);
    
    // Merge
    for(i = 0; i < n1; i++) c[k++] = a[i];
    for(i = 0; i < n2; i++) c[k++] = b[i];
    
    printf("Merged Array: ");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);
    printf("\n");
    
    return 0;
}