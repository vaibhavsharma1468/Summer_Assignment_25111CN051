#include <stdio.h>

int main()
{
    char name[50];
    int roll, marks;
    
    printf("=== Student Record System ===\n");
    
    printf("Enter student name: ");
    scanf("%s", name);
    
    printf("Enter roll number: ");
    scanf("%d", &roll);
    
    printf("Enter marks: ");
    scanf("%d", &marks);
    
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", name);
    printf("Roll  : %d\n", roll);
    printf("Marks : %d\n", marks);
    
    return 0;
}