#include <stdio.h>

int main() {
    int m = 21, n, c;
    while (1) {
        printf("The number of match sticks left %d\n", m);
        printf("Pick 1 or 2 or 3 or 4 matches\n");  
        scanf("%d", &n);
        if (n < 1 || n > 4) {
            continue;
        }
        // reducing the match sticks count
        m -= n;
        printf("The number of match sticks left %d\n", m);

        c = 5 - n;
        printf ("The computer picked %d match sticks\n", c);

        // reducing the match sticks count
        m -= c;

        if (m == 1) {
            printf("The number of match sticks left %d\n", m);
            printf("You lost the game\n");
            break;
        }
    }
}