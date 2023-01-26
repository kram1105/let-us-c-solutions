#include <stdio.h>

int main() {
    for (int i = 0; i <= 6; i++) {
        if (i == 0) {
            for (int j = 0; j <= 6; j++) {
                char c = 'A' + j;
                printf("%c ", c);
            }
            for (int j = 5; j >= 0; j--) {
                char c = 'A' + j;
                printf("%c ", c);
            }
        } else {
            int x = (11 - (2 * i - 1))/2;
            for (int j = 0; j <= x; j++) {
                char c = 'A' + j;
                printf("%c ", c);
            }
            for (int j = 0; j < (2 * i - 1); j++) {
                printf("  ");
            }
            for (int j = x; j >= 0; j--) {
                char c = 'A' + j;
                printf("%c ", c);
            }
        }
        printf("\n");
    }
}
// Output
// A B C D E F G F E D C B A 
// A B C D E F   F E D C B A
// A B C D E       E D C B A
// A B C D           D C B A
// A B C               C B A
// A B                   B A
// A                       A