#include <stdio.h>

struct myStructure {
    int myNum;
    char myLetter;
};

int main() {
    struct myStructure s1;
    struct myStructure s2;

    s1.myNum = 13;
    s1.myLetter = 'B';

    s2.myNum = 20;
    s2.myLetter = 'C';

    printf("%d %c\n", s1.myNum, s1.myLetter);
    printf("%d %c\n", s2.myNum, s2.myLetter);

    return 0;
}