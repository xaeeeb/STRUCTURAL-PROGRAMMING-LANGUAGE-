#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fptr = fopen("nothing.txt", "r");

    if (fptr == NULL) {

        perror("Could not open file");

        exit(EXIT_FAILURE);
    }

    fclose(fptr);

    return EXIT_SUCCESS;
}