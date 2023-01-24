#include <stdio.h>

int main() {
    int i ; 
    while ( i = 10 ) 
    {
        printf ( "\n%d", i ) ; 
        i = i + 1 ; 
    }
}
// The following loop is infinite loop printing 10 because the value of i is assigned as 10 in each iteration
