#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    printf("Enter cost price and selling price of the item.\n");
    scanf("%f%f", &costPrice, &sellingPrice);

    if (costPrice > sellingPrice) {
        printf("Loss %0.2f\n", (costPrice - sellingPrice));
    } else if (costPrice < sellingPrice) {
        printf("Profit %0.2f\n", (sellingPrice - costPrice));
    } else {
        printf("Neither loss nor profit.\n");
    }
}