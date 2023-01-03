#include <stdio.h>

int main() {
    int number;
    printf("Enter the four digit number.\n");
    scanf("%d", &number);
    int lastDigit = number % 10;
    number = number / 1000;
    int firstDigit = number;
    printf("The sum of first digit and last digit of 4 digit number is %d\n", firstDigit + lastDigit);

}