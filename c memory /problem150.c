#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr1;
    int *ptr2;

    ptr1 = malloc(4);

    if (ptr1 == NULL) {
        printf("Initial allocation failed.");
        return 1;
    }

    ptr2 = realloc(ptr1, 8);

    if (ptr2 == NULL) {

        printf("Failed. Unable to resize memory");

        free(ptr1);

    } else {

        printf("Memory successfully resized.");

        ptr1 = ptr2;

        free(ptr1);
    }

    return 0;
}