#include <stdio.h>

int main() {
    int fiveDigitNumber;
    printf("Enter a five digit number\n");
    scanf("%d", &fiveDigitNumber);
    int sumOfDigits = 0;
    
    while(fiveDigitNumber) {
        sumOfDigits += (fiveDigitNumber % 10);
        fiveDigitNumber /= 10;
    }
    
    printf("The sum of five digit number is %d\n", sumOfDigits);
}