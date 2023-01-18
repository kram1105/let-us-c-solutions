#include <stdio.h>

int main() {
    int x, min, max ; 
    scanf ( "\n%d %d", &max, &x ) ; 
    x > max ? (max = x) : (min = x);
    printf("%d %d %d ", x, max, min);
}