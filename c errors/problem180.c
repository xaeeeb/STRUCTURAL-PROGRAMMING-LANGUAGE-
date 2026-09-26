#include <stdio.h>

int main() {

    int number;
    char input[100];

    printf("Enter a number: ");

    while (fgets(input, sizeof(input), stdin)) {

        if (sscanf(input, "%d", &number) == 1) {
            break;
        }

        printf("Invalid input. Try again: ");
    }

    printf("You entered: %d\n", number);

    return 0;
}