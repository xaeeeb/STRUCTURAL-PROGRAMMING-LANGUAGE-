#include <stdio.h>

int main() {
    //corrected version to avoid division by zero error

    int x = 10;
    int y = 0;

    if (y != 0) {
        int result = x / y;
        printf("%d", result);
    } else {
        printf("Cannot divide by zero.");
    }

    return 0;
}