#include<stdio.h>
void main()
{
    int n;
    printf("Enter a No:");
    scanf("%d",&n);
    (n>18) ? printf("person is eligible for voting",n) : printf("person is  Not eligible for voting",n);
}