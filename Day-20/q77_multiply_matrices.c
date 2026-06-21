#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], mul[10][10];
    int rows, cols, i, j, k;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
    
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);
    
    // Multiply matrices
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            mul[i][j] = 0;
            for(k = 0; k < cols; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    printf("Product of matrices:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }
    return 0;
}