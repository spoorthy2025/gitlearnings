#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("ptr: %p\n, *ptr=%d\n",ptr,*ptr);
    ptr++;
    printf("after ptr++:ptr=%p,*ptr=%d\n",ptr,*ptr);
    ptr+=2;
    printf("after ptr+=2:ptr=%p,*ptr=%d\n",ptr,*ptr);
return 0;
    }
