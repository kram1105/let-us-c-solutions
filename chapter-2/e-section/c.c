#include <stdio.h>

int main() {
    char spy = 'a', password = 'z' ; 
    if ( spy == 'a' or password == 'z' ) 
        printf ( "\nAll the birds are safe in the nest" ) ;
}

// or is used instead of or operator i.e. || in the if block
// The correct program would be 
// if (spy == 'a' || password == 'z')