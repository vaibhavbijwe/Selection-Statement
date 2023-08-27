#include <stdio.h>
void main() {
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    printf("Enter the third number: ");
    scanf("%d", &num3);

    int l;
    if (num1 >= num2 && num1 >= num3) {
        l = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        l = num2;
    } else {
        l = num3;
    }
    char eq;

    if (num1 == num2 && num2 == num3) {
        printf("The numbers is equal %c\n",eq);
    } else {
        printf("The numbers is not equal %c\n",eq);
    }
    printf("The largest number among %d, %d, and %d is: %d\n", num1, num2, num3, l);
}
