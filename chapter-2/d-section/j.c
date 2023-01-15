#include <stdio.h>

int main() {
    int i = -1, j = 1, k ,l ; 
    k = !i && j ; 
    l = !i || j ; 
    printf ( "%d %d ", i, j ) ; 
    printf ( "%d %d ", k, l ) ; 
}
// -1 1 0 1 