#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, isSymmetric = 1;
    
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);
    
    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    
    // Check symmetric
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
    }
    
    if(isSymmetric == 1)
        printf("Matrix is Symmetric\n");
    else
        printf("Matrix is not Symmetric\n");
    
    return 0;
}