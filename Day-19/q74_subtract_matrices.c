#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sub[10][10];
    int i, j, row, col;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);
    
    printf("Enter first matrix:\n");
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d", &a[i][j]);
    
    printf("Enter second matrix:\n");
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d", &b[i][j]);
    
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            sub[i][j] = a[i][j] - b[i][j];
    
    printf("Subtraction of matrix:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            printf("%d ", sub[i][j]);
        printf("\n");
    }
    return 0;
}