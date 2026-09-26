#include <stdio.h>

void myFunction();
void myOtherFunction();

int main() {
    myFunction();

    return 0;
}

void myFunction() {
    printf("Text from myFunction\n");

    myOtherFunction();
}

void myOtherFunction() {
    printf("Text from myOtherFunction\n");
}