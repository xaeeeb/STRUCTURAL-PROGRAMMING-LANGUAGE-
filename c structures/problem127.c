#include <stdio.h>

struct Car {
    char brand[30];
    int year;
};

typedef struct {
    char brand[30];
    int year;
} Car;

int main() {

    struct Car car1 = {
        "BMW",
        1999
    };

    Car car2 = {
        "Ford",
        1969
    };

    printf("%s %d\n",
           car1.brand,
           car1.year);

    printf("%s %d\n",
           car2.brand,
           car2.year);

    return 0;
}