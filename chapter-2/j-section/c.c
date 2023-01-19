#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    int max = a;
    if (max < b) {
        max = b;
    } 
    if (max < c) {
        max = c;
    }
    printf("Max number %d", max);
}