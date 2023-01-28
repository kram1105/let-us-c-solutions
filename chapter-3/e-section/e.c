#include <stdio.h>

int main() {
    float i;
    for (int y = 1; y <= 6; y++) {
        for (float x = 5.5; x <= 12.5; x += 0.5) {
            i = 2 + y + 0.5 * x;
            printf("i = %0.2f, x = %0.2f, y = %d\n", i, x, y);
        }
    }
}