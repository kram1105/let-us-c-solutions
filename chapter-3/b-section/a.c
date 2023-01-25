#include <stdio.h>

int main() {
    int hours;
    printf("Enter the number of hours employees work\n");
    scanf("%d", &hours);
    if (hours > 40) {
        int overtimePerEmployee = (hours - 40) * 12;
        printf("Total overtime paid to all employee is equal to %d\n", overtimePerEmployee * 10);
    } else {
        printf("No over time");
    }

}