#include <stdio.h>

int main() {
    float a,b,c;
    printf("Enter the 3 sides of the triangle\n");
    scanf("%f%f%f", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        printf("Valid Triangle\n");
    } else {
        printf("Invalid Triangle\n");
    }
}