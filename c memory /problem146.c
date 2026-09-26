#include <stdio.h>
#include <stdlib.h>

int main() {

    int *students;
    int numStudents = 12;

    students = calloc(numStudents, sizeof(*students));

    if (students == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("%d bytes allocated",
           numStudents * sizeof(*students));

    free(students);

    return 0;
}