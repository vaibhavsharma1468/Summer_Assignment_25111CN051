#include <stdio.h>

// Function to find maximum
int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y, result;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    result = max(x, y);
    
    printf("Maximum = %d\n", result);
    return 0;
}