#include <stdio.h>

int main() {
    int code, flag ; 
    if ( code == 1 & flag == 0 ) 
        printf ( "\nThe eagle has landed" ) ;
}
// The variable has not been initialized and bitwise and is used instead of and operator
// Correct program would be
// if ( code == 1 && flag == 0 )