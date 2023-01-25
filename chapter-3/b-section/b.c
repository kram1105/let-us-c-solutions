#include <stdio.h>

// The factorial program will overflow for larger value of number as we are storing the factorial in interger
int main() {
    int number;
    printf("Enter the number\n");
    scanf("%d", &number);

    int factorial = 1;
    if (number <= 0) {
        printf("Factorial is 1\n");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        printf("Factorial of number %d is %d\n", number, factorial);
    }
}