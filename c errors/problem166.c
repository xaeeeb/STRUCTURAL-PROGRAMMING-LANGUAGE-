#include <stdio.h>
#include <stdlib.h>

int main() {
    //runtime error: accessing freed memory

    int *ptr = malloc(sizeof(int));

    *ptr = 10;

    free(ptr);

    printf("%d", *ptr);

    return 0;
}