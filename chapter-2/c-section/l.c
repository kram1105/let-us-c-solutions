#include <stdio.h>

int main() {
    float x, y;
    printf("Enter the x and y coordinate of point\n");
    scanf("%f%f", &x, &y);

    if (x == 0 && y == 0) {
        printf("The point is on the origin\n");
    } else if (x == 0) {
        printf("The point is on Y axis\n");
    } else if (y == 0) {
        printf("The point is on X axis\n");
    } else {
        printf("The point is on XY plane\n");
    }
}