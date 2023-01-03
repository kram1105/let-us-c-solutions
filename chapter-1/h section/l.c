#include <stdio.h>

int main() {
    float sellingPriceOf15Items, totalProfit;
    printf("Enter the selling price of 15 items and toatl profit.\n");
    scanf("%f%f", &sellingPriceOf15Items, &totalProfit);
    float costPrice = (sellingPriceOf15Items - totalProfit) / 15;
    printf("Cost price of each item is %0.2f\n", costPrice);
}