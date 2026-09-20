#include <stdio.h>
int main() {
    for (int i = 1; i <= 20; i++) {
        if (i > 10)
            break;

        printf("%d ", i);
    }

    return 0;
}