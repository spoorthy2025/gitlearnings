#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void compress_string(char *str) {
    if (str == NULL || *str == '\0') {
        return;
    }

    int n = strlen(str);
    int k = 0;
    int i = 0;

    while (i < n) {
        char current_char = str[i];
        int count = 0;
        int j = i;
        while (j < n && str[j] == current_char) {
            count++;
            j++;
        }

        str[k++] = current_char;

        if (count > 1) {
            char count_str[20];
            int len = sprintf(count_str, "%d", count);

            for (int l = 0; l < len; l++) {
                str[k++] = count_str[l];
            }
        }

        i = j;
    }


    str[k] = '\0';
}

int main() {
    char str1[100] = "aaabbddccc";
    compress_string(str1);
    printf("Compressed String 1: %s\n", str1);

    char str2[100] = "abc";
    compress_string(str2);
    printf("Compressed String 2: %s\n", str2);

    char str3[100] = "aabcccccaaa";
    compress_string(str3);
    printf("Compressed String 3: %s\n", str3);

    char str4[100] = "abbbbbbbbbbb";
    compress_string(str4);
    printf("Compressed String 4: %s\n", str4);
    return 0;
}

