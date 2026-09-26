#include <stdio.h>

enum Level {
    LOW = 5,
    MEDIUM,
    HIGH
};

int main() {

    enum Level myVar = HIGH;

    printf("%d", myVar);

    return 0;
}