#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int digits = 0, special = 0, i = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] == ' ')) {
        } else {
            special++;
        }
        i++;
    }

    printf("Number of Digits in the string is: %d\n", digits);
    printf("Number of Special characters in the string is: %d\n", special);

    return 0;
}

