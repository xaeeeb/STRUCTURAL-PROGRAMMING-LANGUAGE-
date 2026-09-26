#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fptr = fopen("nothing.txt", "r");

    if (fptr == NULL) {

        printf("Failed to open file.\n");

        exit(1);
    }

    fclose(fptr);

    return 0;
}