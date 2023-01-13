#include <stdio.h>

int main() {
    int number;
    printf("Enter the number\n");
    scanf("%d", &number);

    if (number < 0) {
        number = number * (-1);
    }
    printf("Absolute value of the number is %d", number);
}