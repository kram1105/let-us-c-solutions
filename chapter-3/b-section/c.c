#include <stdio.h>

// the following program will overflow for lager value of x and y
int main() {
    int x, y;
    printf("Enter two numbers\n");
    scanf("%d%d", &x, &y);

    // We will print the result of x raise to power y
    int result = 1;
    if (y == 0) {
        printf("%d raise to power 0 is equal to 1\n", x);
    } else {
        for (int i = 1; i <= y; i++) {
            result *= x;
        }
        printf("%d raise to power %d is equal to %d\n", x, y, result);
    }
}