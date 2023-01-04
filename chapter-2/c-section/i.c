#include <stdio.h>

int main() {
    int length, breadth;
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%d%d", &length, &breadth);
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        printf("Area of the rectangle is greater than perimeter of the rectangle\n");
    } else if (area < perimeter) {
        printf("Area of the rectangle is less than perimeter of the rectangle\n");
    } else {
        printf("Area and perimeter of the rectangle are equal\n");
    }
}