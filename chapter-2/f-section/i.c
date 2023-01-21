#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the marks in A and B\n");
    scanf("%d%d", &a, &b);
    if ((a >= 55 && b >= 45) || (a >= 45 && a < 55 && b >= 55)) {
        printf("Passed\n");
    } else if (b < 45 && a >= 65) {
        printf("Reappear in B\n");
    } else {
        printf("Failed\n");
    }
}