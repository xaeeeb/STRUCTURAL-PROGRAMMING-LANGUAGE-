#include <stdio.h>

int main() {
    FILE *fptr;

    // Open file in writing mode
    fptr = fopen("filename.txt", "w");

    // Write text to the file
    fprintf(fptr, "Some text");

    // Close the file
    fclose(fptr);

    return 0;
}