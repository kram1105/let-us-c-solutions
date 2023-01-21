#include <stdio.h>

int main() {
    float hour;
    printf("Enter the time in hour\n");
    scanf("%f", &hour);

    if (hour >= 2 && hour <= 3) {
        printf("Highly Efficient\n");
    } else if (hour > 3 && hour <= 4) {
        printf("Improve Speed\n");
    } else if (hour > 4 && hour <= 5) {
        printf("Training needed\n");
    } else {
        printf("Leave the company\n");
    }
}