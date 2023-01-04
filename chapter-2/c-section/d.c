#include <stdio.h>

int min(int a, int b) {
    if (a > b) {
        return b;
    }
    return a;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int isLeapYear(int year) {
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int numberOfLeapYear(int year, int referenceYear) {
    int countLeapYear = 0;
    for (int i = min(year, referenceYear); i < max(year, referenceYear); i++) {
        if (isLeapYear(i)) {
            countLeapYear++;
        }
    }
    return countLeapYear;
}

int main() {
    int year, referenceYear = 1990;
    printf("Enter the year\n");
    scanf("%d", &year);
    int days = 0;
    if (year >= referenceYear) {
        days = (year - referenceYear) * 365;
    } else {
        days = (referenceYear - year) * 365;
    }
    days += numberOfLeapYear(year, referenceYear);
    if (days % 7 == 0) {
        printf("MONDAY");
    } else if (days % 7 == 1) {
        printf("TUESDAY");
    } else if (days % 7 == 2) {
        printf("WEDNESDAY");
    } else if (days % 7 == 3) {
        printf("THURSDAY");;
    } else if (days % 7 == 4) {
        printf("FRIDAY");
    } else if (days % 7 == 5) {
        printf("SATURDAY");
    } else {
        printf("SUNDAY");
    }
    printf("\n");
}