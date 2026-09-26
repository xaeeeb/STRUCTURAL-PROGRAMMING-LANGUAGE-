#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr;

    ptr = calloc(1, sizeof(*ptr));

    if (ptr == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("%d", *ptr);

    free(ptr);

    return 0;
}