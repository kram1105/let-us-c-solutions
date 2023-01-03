#include <stdio.h>

int main() {
    int number;
    printf("Enter a five digit number\n");
    scanf("%d", &number);
    int firstDigit, secondDigit, thirdDigit, fourthDigit, fiftDigit;
    fiftDigit = number % 10;
    number = number / 10;
    fourthDigit = number % 10;
    number = number / 10;
    thirdDigit = number % 10;
    number = number / 10;
    secondDigit = number % 10;
    number = number / 10;
    firstDigit = number % 10;

    // Add one to each digit if digit is 9 then adding one cause it to become 10 then it will be 0 only 
    firstDigit += 1;
    if (firstDigit == 10) {
        firstDigit = 0;
    }
    secondDigit += 1;
    if (secondDigit == 10) {
        secondDigit = 0;
    }
    thirdDigit += 1;
    if (thirdDigit == 10) {
        thirdDigit = 0;
    }
    fourthDigit += 1;
    if (fourthDigit == 10) {
        fourthDigit = 0;
    }
    fiftDigit += 1;
    if (fiftDigit == 10) {
        fiftDigit = 0;
    }
    int newNumber = firstDigit * 10000 + secondDigit * 1000 + thirdDigit * 100 + fourthDigit * 10 + fiftDigit;
    printf("New Number after adding one to each digit %d\n", newNumber);
}