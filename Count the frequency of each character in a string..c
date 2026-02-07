#include <stdio.h>
#include <string.h>

void countCharacterFrequency(char *str) {

    int count[256] = {0};
    int i;

    for (i = 0; str[i] != '\0'; i++) {

        count[(unsigned char)str[i]]++;
    }


    printf("Character Frequencies:\n");
    for (i = 0; i < 256; i++) {

        if (count[i] > 0) {
            printf("'%c': %d\n", (char)i, count[i]);
        }
    }
}

int main() {
    char inputString[] = "programming is fun";

    printf("Input String: %s\n\n", inputString);
    countCharacterFrequency(inputString);

    return 0;
}

