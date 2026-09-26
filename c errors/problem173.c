#include <stdio.h>

int main() {

    FILE *fptr = fopen("nothing.txt", "r");

    if (fptr == NULL) {
        perror("Error opening file");
        return 1;
    }

    fclose(fptr);

    return 0;
}