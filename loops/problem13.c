#include <stdio.h>
int main() {
    int n, sum = 0;
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &n);



        if (n == 0)
            continue;

        sum += n;

    }

    printf("%d", sum);

    return 0;
}