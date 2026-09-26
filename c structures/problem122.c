#include <stdio.h>

struct Car {
    char brand[30];
    int year;
};

int main() {

    struct Car car = {
        "Toyota",
        2020
    };

    struct Car *ptr = &car;

    printf("Brand: %s\n", ptr->brand);
    printf("Year: %d\n", ptr->year);

    return 0;
}