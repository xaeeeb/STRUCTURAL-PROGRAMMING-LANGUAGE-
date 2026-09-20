#include <stdio.h>
int main() {
    int number = 5;
    int i = 1;

    while (i <= 10) {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }

    return 0;
}