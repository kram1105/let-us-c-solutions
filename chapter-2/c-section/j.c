#include <stdio.h>

// This program expects that points are given in order
int main() {
    float x1,x2,x3,y1,y2,y3,m,n;
    printf("Enter point 1\n");
    scanf("%f%f", &x1, &y1);
    
    printf("Enter point 2\n");
    scanf("%f%f", &x2, &y2);
    
    printf("Enter point 3\n");
    scanf("%f%f", &x3, &y3);

    // Find the slope and check if it is equal
    m = (y2-y1) / (x2-x1);
    n = (y3-y2) / (x3-x2);

    if (m == n) {
        printf("Points are on straight line");
    } else {
        printf("Points are not on straight line");
    }
}