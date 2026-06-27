#include <stdio.h>

int main()
{
    char name[50];
    int roll, m1, m2, m3, m4, m5;
    int total;
    float percentage;
    
    printf("=== Marksheet Generation System ===\n\n");
    
    printf("Enter Student Name: ");
    scanf("%s", name);
    
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    
    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;
    
    printf("\n=================== MARKSHEET ===================\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", roll);
    printf("-----------------------------------------------\n");
    printf("Subject 1    : %d\n", m1);
    printf("Subject 2    : %d\n", m2);
    printf("Subject 3    : %d\n", m3);
    printf("Subject 4    : %d\n", m4);
    printf("Subject 5    : %d\n", m5);
    printf("-----------------------------------------------\n");
    printf("Total Marks  : %d / 500\n", total);
    printf("Percentage   : %.2f%%\n", percentage);
    
    if(percentage >= 90)
        printf("Grade        : A+ (Excellent)\n");
    else if(percentage >= 75)
        printf("Grade        : A (Very Good)\n");
    else if(percentage >= 60)
        printf("Grade        : B (Good)\n");
    else if(percentage >= 40)
        printf("Grade        : C (Pass)\n");
    else
        printf("Grade        : Fail\n");
    
    printf("=================================================\n");
    
    return 0;
}