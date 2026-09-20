#include <stdio.h>

int main() {
    int choice;
    float length, width, radius, area;

    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter length: ");
        scanf("%f", &length);

        printf("Enter width: ");
        scanf("%f", &width);

        area = length * width;

        printf("Area of rectangle = %.2f\n", area);
    }
    else if (choice == 2) {
        printf("Enter radius: ");
        scanf("%f", &radius);

        area = 3.14159 * radius * radius;

        printf("Area of circle = %.2f\n", area);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
