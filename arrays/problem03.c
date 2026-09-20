#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Your username is: @%s123\n", name);

    return 0;
}
