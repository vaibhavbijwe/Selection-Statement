#include<stdio.h>
int main()
{
  int n;
  printf("Enter A Number");
  scanf("%d",&n);
  (n%2==0) ? printf("Even No:%d",n) : printf("Odd No:%d",n); //ternary operator
  return 0;
}
