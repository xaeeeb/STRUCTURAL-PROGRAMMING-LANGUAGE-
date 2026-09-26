#include <stdio.h>

int calculateSum(int x, int y) {
    return x + y;
}

int main() {
    int results[6];

    results[0] = calculateSum(5, 3);
    results[1] = calculateSum(8, 2);
    results[2] = calculateSum(15, 15);
    results[3] = calculateSum(9, 1);
    results[4] = calculateSum(7, 7);
    results[5] = calculateSum(1, 1);

    for (int i = 0; i < 6; i++) {
        printf("Result%d: %d\n", i + 1, results[i]);
    }

    return 0;
}