#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("filename.txt", "r");

    char myString[100];

    fclose(fptr);

    return 0;
}