#include <stdio.h>

struct Person {
    int age;
};

int main() {
    struct Person p;

    p.age = 25;

    printf("%d", p.age);

    return 0;
}