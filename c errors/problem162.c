#include <stdio.h>

int main() {
    //runtime error: division by zero

    int x = 10;
    int y = 0;

    int result = x / y;

    printf("%d", result);

    return 0;
}