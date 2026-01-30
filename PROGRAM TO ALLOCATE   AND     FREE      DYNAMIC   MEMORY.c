#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Error! Memory not allocated.\n");
        return 1;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
    }

    printf("The elements are: ");
    for (i = 0; i < n; ++i) {
        printf("%d, ", *(ptr + i));
    }
    printf("\n");
    free(ptr);
    ptr = NULL;

    return 0;
}

