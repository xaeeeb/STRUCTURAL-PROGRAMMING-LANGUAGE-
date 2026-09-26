#include <stdio.h>

int main() {
    FILE *fptr;

    // Open file in append mode
    fptr = fopen("filename.txt", "a");

    // Add text to the end
    fprintf(fptr, "\nHi everybody!");

    // Close the file
    fclose(fptr);

    return 0;
}