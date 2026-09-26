#include <stdio.h>

int main() {
    FILE *fptr;

    // Open file in read mode
    fptr = fopen("filename.txt", "r");

    fclose(fptr);

    return 0;
}