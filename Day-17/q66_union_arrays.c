#include <stdio.h>

int main()
{
    int a[50], b[50], uni[100];
    int n1, n2, i, j, k = 0, found;
    
    printf("Enter size of first array: "); scanf("%d", &n1);
    printf("Enter %d numbers:\n", n1);
    for(i = 0; i < n1; i++) scanf("%d", &a[i]);
    
    printf("Enter size of second array: "); scanf("%d", &n2);
    printf("Enter %d numbers:\n", n2);
    for(i = 0; i < n2; i++) scanf("%d", &b[i]);
    
    // Copy first array
    for(i = 0; i < n1; i++) uni[k++] = a[i];
    
    // Add from second array if not present
    for(i = 0; i < n2; i++)
    {
        found = 0;
        for(j = 0; j < k; j++)
        {
            if(uni[j] == b[i])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
            uni[k++] = b[i];
    }
    
    printf("Union: ");
    for(i = 0; i < k; i++) printf("%d ", uni[i]);
    printf("\n");
    
    return 0;
}