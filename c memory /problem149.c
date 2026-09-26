#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr1;
    int *ptr2;
    int size;

    size = 4 * sizeof(*ptr1);

    ptr1 = malloc(size);

    if (ptr1 == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("%d bytes allocated\n", size);

    size = 6 * sizeof(*ptr1);

    ptr2 = realloc(ptr1, size);

    if (ptr2 == NULL) {
        free(ptr1);
        printf("Reallocation failed.");
        return 1;
    }

    printf("%d bytes reallocated\n", size);

    free(ptr2);

    return 0;
}