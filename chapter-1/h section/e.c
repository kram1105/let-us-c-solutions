#include <stdio.h>

int main() {
    float length, breadth, radius;
    printf("Enter the length and breadth of the rectangle.\n");
    scanf("%f%f", &length, &breadth);
    printf("Enter the radius of circle.\n");
    scanf("%f", &radius);

    float areaOfRectangle, areaOfCircle, perimeterOfRectangle, circumferanceOfCircle;
    areaOfRectangle = length * breadth;
    areaOfCircle = 3.14 * radius * radius;
    perimeterOfRectangle = 2 * (length + breadth);
    circumferanceOfCircle = 2 * 3.14 * radius;

    printf("The area of the rectangle is %f\n", areaOfRectangle);
    printf("The perimeter of the rectangle is %f\n", perimeterOfRectangle);
    printf("The area of the circle is %f\n", areaOfCircle);
    printf("The circumferance of the circle is %f\n", circumferanceOfCircle);
}