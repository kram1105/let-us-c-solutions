#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    printf("Enter angles of the triangle\n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    if (angle1 + angle2 + angle3 == 180) {
        printf("Valid Triangle");
    } else {
        printf("Invalid Triangle");
    }
}