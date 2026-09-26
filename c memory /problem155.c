#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char brand[50];
    int year;
};

int main() {

    struct Car *ptr;

    ptr = malloc(sizeof(struct Car));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    strcpy(ptr->brand, "Honda");
    ptr->year = 2022;

    printf("Brand: %s\n", ptr->brand);
    printf("Year: %d\n", ptr->year);

    free(ptr);

    return 0;
}