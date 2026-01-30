#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Error! Memory allocation failed.\\n");
        return 1;
    }

    printf("Memory successfully allocated. Enter the elements:\\n");
    for (i = 0; i < n; i++) {

        scanf("%d", (ptr + i));
    }
    printf("\\nThe elements in the array are:\\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\\n");


    free(ptr);
    ptr = NULL;
    return 0;
}

