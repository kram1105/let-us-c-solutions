#include <stdio.h>

int main() {
    int c,d;
    printf("Enter two numbers.\n");
    scanf("%d%d", &c, &d);
    int e = d;
    d = c;
    c = e;
    printf("The interchanged numbers are %d and %d\n", c, d);
}