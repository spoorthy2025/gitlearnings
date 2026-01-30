#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILE_SIZE 10000
void reverse_string(char* str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {

        temp = str[start];
        str[start] = str[end];
        str[end] = temp;


        start++;
        end--;
    }
}

int main() {
    FILE *file_ptr;
    char file_content[MAX_FILE_SIZE];
    long file_size;
    const char* filename = "input.txt";

    file_ptr = fopen(filename, "r");
    if (file_ptr == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }


    fseek(file_ptr, 0, SEEK_END);
    file_size = ftell(file_ptr);
    rewind(file_ptr);

    if (file_size >= MAX_FILE_SIZE) {
        printf("Error: File too large to process.\n");
        fclose(file_ptr);
        return 1;
    }
    size_t bytes_read = fread(file_content, 1, file_size, file_ptr);
    if (bytes_read != file_size) {
      printf("Error: Reading error.\n");
    }
    file_content[file_size] = '\0';


    fclose(file_ptr);

    printf("Original file content:\n%s\n", file_content);


    reverse_string(file_content);

    printf("Reversed file content:\n%s\n", file_content);


    FILE *output_file_ptr = fopen("output.txt", "w");
    if (output_file_ptr == NULL) {
        printf("Error: Could not write output file.\n");
        return 1;
    }
    fprintf(output_file_ptr, "%s", file_content);
    fclose(output_file_ptr);
    printf("Reversed content written to output.txt\n");

    return 0;
}
