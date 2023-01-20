#include <stdio.h>

int main() {
    char c;
    printf("Enter the char\n");
    scanf("%c", &c);
    if (c >= 65 && c <= 90) {
        printf ("Capital Letter\n");
    } else if (c >= 97 && c <= 122) {
        printf ("Small Case Letter\n");
    } else if (c >= 48 && c <= 57) {
        printf("A Digit\n");
    } else if ((c >= 0 && c <= 47) || (c >= 58 && c <=64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 127)) {
        printf("Special Character\n");
    } else {
        printf("Unknown Character");
    }
}