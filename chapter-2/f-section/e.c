#include <stdio.h>

int main() {
    int days;
    printf("Enter the number of days the member is late to return the book\n");
    scanf("%d", &days);
    float lateFine;
    if (days <= 5) {
        printf("Late fine is Rs 0.5\n");
    } else if (days > 5 && days <= 10) {
        printf("Late fine is Rs 1\n");
    } else if (days > 10 && days <= 30) {
        printf("Late fine is Rs 5\n");
    } else {
        printf("Your membership is cancelled\n");
    }
}