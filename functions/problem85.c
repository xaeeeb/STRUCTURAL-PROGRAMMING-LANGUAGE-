#include <stdio.h>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    printf("%d", add(5, 3));

    return 0;
}