#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the sides of the triangle\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Equilateral Triangle\n");
    } else if (a == b || b == c || c == a) {
        printf("Isosceles Triangle\n");
    } else {
        printf("Scalene Triangle\n");
    }

    if ((a*a + b*b - c*c == 0) || (a*a + c*c - b*b == 0) || (b*b + c*c - a*a == 0)) {
        printf("Right Angle Triangle\n");
    }
}