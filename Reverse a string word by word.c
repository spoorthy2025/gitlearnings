#include <stdio.h>
#include <string.h>

void reverse(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}


void reverseWords(char* s) {
    char* word_start = s;
    char* temp = s;
    while (*temp) {
        if (*temp == ' ') {
            reverse(word_start, temp - 1);
            word_start = temp + 1;
        }
        temp++;
    }

    reverse(word_start, temp - 1);

    reverse(s, temp - 1);
}

int main() {
    char str[] = "the sky is blue";
    printf("Original string: %s\n", str);

    reverseWords(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

