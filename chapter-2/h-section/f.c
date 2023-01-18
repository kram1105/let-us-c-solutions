#include <stdio.h>

int main() {
    int kk = 65 ,ll ; 
    ll = ( kk == 65 : printf ( "\n kk is equal to 65" ) : printf ( "\n kk is not
    equal to 65" ) ) ; 
    printf( "%d", ll ) ; 
}
// The ternary operator should start with ? on line 5 and the last printf content should not be splitted on the new line.
// We can use / symbol to split the content on new line