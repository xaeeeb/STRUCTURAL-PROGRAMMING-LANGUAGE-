#include <stdio.h>

struct S {
    char a;
    int b;
    char c;
};

union U {
    char a;
    int b;
    char c;
};

int main() {

    printf("Struct size: %zu\n",
           sizeof(struct S));

    printf("Union size: %zu\n",
           sizeof(union U));

    return 0;
}