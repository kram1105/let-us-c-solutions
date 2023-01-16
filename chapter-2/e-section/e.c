#include <stdio.h>
// We have to find out the errors if any

int main() {
    int x = 10 , y = 20; 
    if ( x >= 2 and y <=50 ) 
        printf ( "\n%d", x ) ; 
}
// and is used instead of and operator. The correct program would be
// if (x >= 2 && y <= 50)