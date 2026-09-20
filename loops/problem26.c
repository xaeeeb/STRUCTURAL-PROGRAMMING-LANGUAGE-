#include <stdio.h>

int main()
{
    int number[8];
    int smallest;
    int i;
    for (i = 0; i <= 7; i++)
    {
        scanf("%d", &number[i]);
    }
    smallest = number[0];

    for (i = 0; i <= 7; i++)
    {
        if (smallest > number[i])
        {
            smallest = number[i];
        }
    }

    printf("Smallest number is %d", smallest);

    return 0;
}