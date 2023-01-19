#include <stdio.h>

int main() {
    char c;
    printf("Enter the char\n");
    scanf("%c", &c);
    // Comparing the char with ASCII value
    c > 122 ? printf("Not lower case") : c < 96 ? printf("Not lower case") : printf("Lower case");
}