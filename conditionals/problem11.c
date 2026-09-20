#include <stdio.h>
#include <stdbool.h>
int main() {
    int price = 700;
    bool premium = true;

    printf("%d", price > 1000 || premium);

    return 0;
}