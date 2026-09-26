#include <stdio.h>

union myUnion {
    int myNum;
    char myLetter;
    char myString[30];
};

int main() {

    union myUnion u1;

    return 0;
}