#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char brand[50];
    int year;
};

int main() {

    int count = 2;

    struct Car *cars;

    cars = malloc(count * sizeof(struct Car));

    if (cars == NULL) {
        printf("Initial allocation failed.\n");
        return 1;
    }

    strcpy(cars[0].brand, "Toyota");
    cars[0].year = 2010;

    strcpy(cars[1].brand, "Audi");
    cars[1].year = 2019;

    int newCount = 3;

    struct Car *temp;

    temp = realloc(
        cars,
        newCount * sizeof(struct Car)
    );

    if (temp == NULL) {

        free(cars);

        printf("Reallocation failed.\n");

        return 1;
    }

    cars = temp;

    strcpy(cars[2].brand, "Kia");
    cars[2].year = 2022;

    for (int i = 0; i < newCount; i++) {

        printf("%s - %d\n",
               cars[i].brand,
               cars[i].year);
    }

    free(cars);

    return 0;
}