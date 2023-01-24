#include <stdio.h>

int main() {
    int x = 4, y = 0;
    while (x >= 0) {
        x--;
        y++;
        if (x == y) {
            continue;
        } else {
            printf ( "\n%d %d", x, y ) ;
        }
    }
}
// Output
// 3 1
// 1 3
// 0 4
// -1 5