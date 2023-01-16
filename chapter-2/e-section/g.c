#include <stdio.h>
// We have to find out the errors if any

int main() {
    int x = 2; 
    if ( x == 2 && x != 0 );
    { 
    printf ( "\nHi" ) ; 
    printf( "\nHello" ) ; 
    } 
    else 
        printf( "Bye" ) ;
}
// Semicolon is used after if statement so the below else block would be invalid as this semicolon will treat as empty statement.