#include <stdio.h>

int main()
{
    int score = 0, ans;
    
    printf("Welcome to Simple Quiz!\n\n");
    
    printf("Q1. What is capital of India?\n");
    printf("1. Mumbai  2. Delhi  3. Kolkata\n");
    scanf("%d", &ans);
    if(ans == 2) { score++; printf("Correct!\n"); }
    else printf("Wrong! Answer is Delhi\n");
    
    printf("\nQ2. What is 15 + 27?\n");
    printf("1. 40  2. 42  3. 45\n");
    scanf("%d", &ans);
    if(ans == 2) { score++; printf("Correct!\n"); }
    else printf("Wrong! Answer is 42\n");
    
    printf("\nQ3. Who is Father of C Language?\n");
    printf("1. Dennis Ritchie  2. James Gosling  3. Bjarne Stroustrup\n");
    scanf("%d", &ans);
    if(ans == 1) { score++; printf("Correct!\n"); }
    else printf("Wrong! Answer is Dennis Ritchie\n");
    
    printf("\nYour Score = %d / 3\n", score);
    
    if(score == 3) printf("Excellent!\n");
    else if(score == 2) printf("Good!\n");
    else printf("Better luck next time!\n");
    
    return 0;
}