#include <stdio.h>

// Armstrong number - If sum of cubes of each digit of the number is equal to the number itself
// Print all the Armstrong number between 1 to 500

int main() {
    for (int i = 1 ; i <= 500; i++) {
        int number = i;
        int cubeOfDigits = 0;
        while (number) {
            int digit = number % 10;
            cubeOfDigits += (digit * digit * digit);
            number /= 10;
        }
        if (cubeOfDigits == i) {
            printf ("Armstrong number %d\n", i);
        }
    }
}

// Output
// Armstrong number 1
// Armstrong number 153
// Armstrong number 370
// Armstrong number 371
// Armstrong number 407