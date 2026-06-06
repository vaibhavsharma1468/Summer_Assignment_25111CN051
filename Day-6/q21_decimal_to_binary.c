#include <stdio.h>

int main()
{
    int num, i, binary[32];
    
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    if(num == 0)
    {
        printf("Binary: 0\n");
        return 0;
    }
    
    printf("Binary equivalent: ");
    while(num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    // Print in reverse
    for(int j = i-1; j >= 0; j--)
        printf("%d", binary[j]);
    
    printf("\n");
    return 0;
}