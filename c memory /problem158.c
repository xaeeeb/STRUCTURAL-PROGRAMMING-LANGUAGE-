#include <stdio.h>
#include <stdlib.h>

struct list {
    int *data;
    int numItems;
    int size;
};

void addToList(struct list *myList, int item);

int main() {

    struct list myList;

    int amount = 44;

    myList.numItems = 0;
    myList.size = 10;

    myList.data =
        malloc(myList.size * sizeof(int));

    if (myList.data == NULL) {

        printf("Memory allocation failed");

        return 1;
    }

    for (int i = 0; i < amount; i++) {

        addToList(&myList, i + 1);
    }

    for (int i = 0;
         i < myList.numItems;
         i++) {

        printf("%d ", myList.data[i]);
    }

    free(myList.data);

    myList.data = NULL;

    return 0;
}

void addToList(struct list *myList, int item) {

    if (myList->numItems == myList->size) {

        myList->size += 10;

        int *temp = realloc(
            myList->data,
            myList->size * sizeof(int)
        );

        if (temp == NULL) {
            printf("Reallocation failed");
            return;
        }

        myList->data = temp;
    }

    myList->data[myList->numItems] = item;

    myList->numItems++;
}