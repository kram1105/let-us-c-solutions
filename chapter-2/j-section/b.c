#include <stdio.h>

int main() {
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    // year divisible by 400 or year divisible by 4 but not 100
    (year % 400 == 0) ? printf("leap year") : (year % 4 == 0 && year % 100 != 0) ? printf("leap year") : printf("not a leap year");
}