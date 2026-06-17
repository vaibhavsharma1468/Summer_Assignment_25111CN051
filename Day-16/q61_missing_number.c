#include <stdio.h>

int main()
{
    int arr[50], n, i, sum = 0, expected_sum;
    
    printf("Enter size of array (n): ");
    scanf("%d", &n);
    
    printf("Enter %d elements (from 1 to %d with one missing):\n", n, n+1);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    
    expected_sum = (n+1) * (n+2) / 2;
    
    printf("Missing number is: %d\n", expected_sum - sum);
    return 0;
}