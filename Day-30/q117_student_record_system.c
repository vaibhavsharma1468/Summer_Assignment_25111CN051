#include <stdio.h>

int main()
{
    char names[10][50];
    int roll[10], marks[10];
    int n, i;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", names[i]);
        printf("Roll No: ");
        scanf("%d", &roll[i]);
        printf("Marks: ");
        scanf("%d", &marks[i]);
    }
    
    printf("\n=== All Student Records ===\n");
    for(i = 0; i < n; i++)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", names[i], roll[i], marks[i]);
    }
    return 0;
}