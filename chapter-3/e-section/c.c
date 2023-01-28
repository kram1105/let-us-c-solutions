#include <stdio.h>

int main() {
    float fact = 1, result = 0;

    for (int i = 1; i < 8; i++) {
        fact *= i;
        result += i / fact;
    }
    printf("Result is %f\n", result);
}
// Output
// Result is 2.718056