#include <stdio.h>

enum Weekday {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {

    enum Weekday today = WEDNESDAY;

    printf("%d", today);

    return 0;
}