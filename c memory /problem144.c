#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr;

    ptr = malloc(sizeof(*ptr));

    if (ptr == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    *ptr = 25;

    printf("%d", *ptr);

    free(ptr);

    return 0;
}