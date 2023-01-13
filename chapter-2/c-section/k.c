#include <stdio.h>

int main() {
    float x,y,r;
    printf("Enter the x and y coordinate of the circle\n");
    scanf("%f%f",&x, &y);

    float radius;
    printf("Enter the radius of the circle\n");
    scanf("%f", &radius);

    float xPoint, yPoint;
    printf("Enter the x and y coordinate of the point\n");
    scanf("%f%f", &xPoint, &yPoint);

    float distanceSquare = (xPoint - x) * (xPoint - x) + (yPoint - y) * (yPoint - y);
    float radiusSquare = radius * radius;
    if (distanceSquare == radiusSquare) {
        printf("Point is on the circle\n");
    } else if( distanceSquare < radiusSquare) {
        printf("Point is within the circle\n");
    } else {
        printf("Point is outside the circle\n");
    }
}