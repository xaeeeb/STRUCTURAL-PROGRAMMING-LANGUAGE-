#include <stdio.h>

int main() {

    int number;

    do {

        printf("Choose a number between 1 and 5: ");

        scanf("%d", &number);

        while (getchar() != '\n');

    } while (number < 1 || number > 5);

    printf("You chose: %d\n", number);

    return 0;
}