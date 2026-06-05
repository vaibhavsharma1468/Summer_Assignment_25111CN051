 #include <stdio.h>

int main()
{
    int num, original, i, largest = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;   // Save original number to print later
    
    // Step 1: Divide by 2 as much as possible
    while(num % 2 == 0)
    {
        largest = 2;
        num = num / 2;
    }
    
    // Step 2: Check odd numbers from 3 onwards
    for(i = 3; i * i <= num; i = i + 2)
    {
        while(num % i == 0)
        {
            largest = i;      // Update largest prime factor
            num = num / i;
        }
    }
    
    // Step 3: If remaining number is a prime > 2
    if(num > 2)
        largest = num;
    
    printf("Largest prime factor of %d is %d\n", original, largest);
    
    return 0;
}