#include <stdio.h>

void greetMorning() {
    printf("Good morning!\n");
}

void greetEvening() {
    printf("Good evening!\n");
}

void greet(void (*callback)()) {
    callback();
}

int main() {
    greet(greetMorning);
    greet(greetEvening);

    return 0;
}