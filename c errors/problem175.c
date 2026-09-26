#include <stdio.h>
#include <errno.h>

int main() {

    FILE *fptr = fopen("nothing.txt", "r");

    if (fptr == NULL) {

        if (errno == ENOENT) {
            printf("The file was not found.\n");
        } else {
            printf("Some other file error occurred.\n");
        }

        return 1;
    }

    fclose(fptr);

    return 0;
}