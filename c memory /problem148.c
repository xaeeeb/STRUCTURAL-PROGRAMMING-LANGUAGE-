#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr1 = malloc(4);

    if (ptr1 == NULL) {
        return 1;
    }

    char *ptr2 = (char *)ptr1;

    ptr1[0] = 1684234849;

    printf("%d\n", *ptr1);

    printf("%c %c %c %c",
           ptr2[0],
           ptr2[1],
           ptr2[2],
           ptr2[3]);

    free(ptr1);

    return 0;
}