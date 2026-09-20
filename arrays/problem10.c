#include <stdio.h>

int main() {
    char item[50];
    float price, quantity, total;

    printf("Enter item name: ");
    scanf("%s", item);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%f", &quantity);

    total = price * quantity;

    printf("\n===== SHOPPING RECEIPT =====\n");
    printf("Item: %s\n", item);
    printf("Price: %.2f\n", price);
    printf("Quantity: %.0f\n", quantity);
    printf("Total: %.2f\n", total);
    printf("============================\n");

    return 0;
}
