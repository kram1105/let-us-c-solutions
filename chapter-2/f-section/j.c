#include <stdio.h>
#include <string.h>

int main() {
    int stock = 100;
    int order;
    char credit[20];
    printf("Enter number of orders\n");
    scanf("%d", &order);

    printf("Enter the credit\n");
    scanf("%s", credit);

    if (order <= stock && (strcmp("ok", credit) == 0)) {
        printf("Supply\n");
    } else if (strcmp("ok", credit) != 0) {
        printf("Don't Supply\n");
    } else if (order > stock && (strcmp("ok", credit) == 0)) {
        printf("Supply order %d\n", stock);
        printf("Rest will be shipped shortly\n");
    }
}