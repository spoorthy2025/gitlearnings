#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

char findFirstNonRepeating(char* str) {

    int frequency[MAX_CHARS] = {0};
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (frequency[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';

    char result = findFirstNonRepeating(str);

    if (result != '\0') {
        printf("The first non-repeating character is: '%c'\n", result);
    } else {
        printf("No non-repeating character found or all characters are repeating.\n");
    }

    return 0;
}
