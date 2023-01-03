#include <stdio.h>

int main() {
    int fiveDigitNumber;
    printf("Enter five digit number\n");
    scanf("%d", &fiveDigitNumber);

    int reverseNumber = 0;
    while (fiveDigitNumber) {
        reverseNumber = reverseNumber * 10 + (fiveDigitNumber % 10);
        fiveDigitNumber = fiveDigitNumber / 10;
    }
    printf("Reversed number is %d\n", reverseNumber);
}