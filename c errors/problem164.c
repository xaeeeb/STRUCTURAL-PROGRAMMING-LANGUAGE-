#include <stdio.h>

int main() {
    //out of bounds error: accessing an array element that is out of the valid range

    int numbers[3] = {1, 2, 3};

    printf("%d", numbers[8]);

    return 0;
}