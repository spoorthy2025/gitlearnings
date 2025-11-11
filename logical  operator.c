#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 15;

    if (a > b && a < c) {
        printf("a is greater than b AND less than c\n"); // This will print
    }


    if (b > a || b < c) {
        printf("b is greater than a OR less than c\n"); // This will print
    }


    if (!(a == b)) {
        printf("a is NOT equal to b\n"); // This will print
    }

    return 0;
}
