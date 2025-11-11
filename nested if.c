#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > 0) {
        if (num2 > 0) {
            printf("Both numbers are positive.\n");
        } else if (num2 < 0) {
            printf("The first number is positive, and the second number is negative.\n");
        } else {
            printf("The first number is positive, and the second number is zero.\n");
        }
    } else if (num1 < 0) {
        if (num2 > 0) {
            printf("The first number is negative, and the second number is positive.\n");
        } else if (num2 < 0) {
            printf("Both numbers are negative.\n");
        } else {
            printf("The first number is negative, and the second number is zero.\n");
        }
    } else {
        if (num2 > 0) {
            printf("The first number is zero, and the second number is positive.\n");
        } else if (num2 < 0) {
            printf("The first number is zero, and the second number is negative.\n");
        } else {
            printf("Both numbers are zero.\n");
        }
    }

    return 0;
}
