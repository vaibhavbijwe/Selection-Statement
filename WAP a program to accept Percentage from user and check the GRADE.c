#include <stdio.h>
void main() {
    float p;

    printf("Enter the percentage: ");
    scanf("%f", &p);

    if (p >= 70) 
    {
        printf("Grade A\n");
    } 
        else if (p >= 60) 
        {
            printf("Grade B+\n");
        } 
        else if (p >= 45) 
        {
            printf("Grade B\n");
        } 
        else if (p >= 35) 
        {
            printf("Grade C\n");
        } 
    else 
    {
        printf("Fail\n");
    }
}
