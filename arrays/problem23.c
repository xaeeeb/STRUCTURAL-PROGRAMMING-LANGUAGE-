#include <stdio.h>

int main()
{
    int a[5];
    int sum = 0;
    float average;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }




    average = (float)sum / 5;

    printf("Average = %.2f", average);

    return 0;
}