#include <stdio.h>

int main() {

    for (int i = 2; i <= 300; i++) {
        int flag = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d is a prime number\n", i);
        }
    }
}