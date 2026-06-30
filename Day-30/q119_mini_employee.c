#include <stdio.h>

int main()
{
    char name[50], post[30];
    int id, salary;
    
    printf("=== Mini Employee Management ===\n");
    
    printf("Enter Employee Name: ");
    scanf("%s", name);
    printf("Enter Employee ID: ");
    scanf("%d", &id);
    printf("Enter Post: ");
    scanf("%s", post);
    printf("Enter Salary: ");
    scanf("%d", &salary);
    
    printf("\nEmployee Details:\n");
    printf("Name   : %s\n", name);
    printf("ID     : %d\n", id);
    printf("Post   : %s\n", post);
    printf("Salary : %d\n", salary);
    
    return 0;
}