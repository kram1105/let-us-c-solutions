#include <stdio.h>

int main() {
    int x = 4, y = 0;
    while (x >= 0) {
        if (x == y) {
            break;
        } else {
            printf("\n%d %d", x, y);
        }
        x--;
        y++;
    }
}
// Output
// 4 0
// 3 1