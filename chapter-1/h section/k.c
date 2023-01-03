#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount in hundreds\n");
    scanf("%d", &amount);
    printf("Rs 10 notes to be given to withdrawer is %d\n", amount / 10);
    printf("Rs 50 notes to be given to withdrawer is %d\n", amount / 50);
    printf("Rs 100 notes to be given to withdrawer is %d\n", amount / 100);
}