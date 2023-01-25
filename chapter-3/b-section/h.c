#include <stdio.h>

// Convert into octal from decimal. The following steps are followed
// Divide the number by 8.
// Get the integer quotient for the next iteration.
// Get the remainder for the octal digit.
// Repeat the steps until the quotient is equal to 0.

int main() {
    int number, octalNumber = 0, i = 1;
    printf("Enter the number\n");
    scanf("%d", &number);

    int originalNumber = number;
    while (originalNumber) {
        octalNumber += (originalNumber % 8 ) * i;
        i *= 10;
        originalNumber /= 8;
    }
    
    printf("Octal number for the number %d is %d\n", number, octalNumber);
}