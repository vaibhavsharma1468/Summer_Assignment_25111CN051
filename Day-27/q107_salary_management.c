#include <stdio.h>

int main()
{
    int basic, hra, da, total;
    
    printf("=== Salary Management System ===\n");
    
    printf("Enter Basic Salary: ");
    scanf("%d", &basic);
    
    hra = basic * 0.20;   // 20% HRA
    da  = basic * 0.40;   // 40% DA
    
    total = basic + hra + da;
    
    printf("\n--- Salary Slip ---\n");
    printf("Basic Salary : %d\n", basic);
    printf("HRA          : %d\n", hra);
    printf("DA           : %d\n", da);
    printf("Total Salary : %d\n", total);
    
    return 0;
}