#include <stdio.h>

struct Example {
    int b;
    char a;
    char c;
};

int main() {

    printf("Size of struct: %zu bytes\n",
           sizeof(struct Example));

    return 0;
}