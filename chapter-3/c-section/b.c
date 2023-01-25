#include <stdio.h>

int main() {
    int i ; 
    for ( i = 1 ; i <= 5 ; printf ( "\n%d", i ) ) ; 
        i++ ; 
}
// The following for loop is infinite loop printing 1. There is a semicolon at the end of the for loop which 
// means for loop has empty body so it will keep printing i