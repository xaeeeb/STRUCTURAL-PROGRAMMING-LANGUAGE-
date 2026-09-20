#include <stdio.h>
int main() {
    int x = 15;

    if (x < 10)
        printf("Small");
    else if (x < 20)
        printf("Medium");
    else
        printf("Large");

    return 0;
}