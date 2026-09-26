#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr;

    ptr = malloc(sizeof(*ptr));

    if (ptr == NULL) {
        return 1;
    }

    *ptr = 20;

    printf("%d\n", *ptr);

    free(ptr);

    ptr = NULL;

    return 0;
}