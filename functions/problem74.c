#include <stdio.h>

void myFunction(int numbers[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    myFunction(numbers);

    return 0;
}