#include <stdio.h>

int main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    int length = sizeof(ages) / sizeof(ages[0]);

    int lowestAge = ages[0];

    for (int i = 0; i < length; i++) {
        if (lowestAge > ages[i]) {
            lowestAge = ages[i];
        }
    }

    printf("Lowest age: %d", lowestAge);

    return 0;
}