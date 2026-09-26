#include <stdio.h>

int main() {
    FILE *fptr;
    char myString[100];

    fptr = fopen("filename.txt", "r");

    if (fptr != NULL) {

        while (fgets(myString, 100, fptr)) {
            printf("%s", myString);
        }

    } else {
        printf("Not able to open the file.");
    }

    fclose(fptr);

    return 0;
}