#include <stdio.h>
#include <stdlib.h>

int main() {
    //corrected version to avoid out of bounds error
    int numbers[3] = {1, 2, 3};

    printf("%d", numbers[2]); // Accessing the last valid index

    return 0;
}