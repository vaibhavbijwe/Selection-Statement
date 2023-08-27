#include <stdio.h>

void main() {
    float costPrice, discountAmount, finalPrice;
    char isStudent;

    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);

    if (isStudent == 'y' || isStudent == 'Y') {
        if (costPrice > 500) {
            discountAmount = 0.10 * costPrice;
        } else {
            discountAmount = 0.05 * costPrice;
        }
    } else {
        if (costPrice > 500) {
            discountAmount = 0.08 * costPrice;
        } else {
            discountAmount = 0.02 * costPrice;
        }
    }

    finalPrice = costPrice - discountAmount;

    printf("Discount Amount: %f\n", discountAmount);
    printf("Final Price: %f\n", finalPrice);
}
