#include <stdio.h>

int main() {
    int i = -4, j, num ; 
    j = ( num < 0 ? 0 : num * num ) ; 
    printf ( "\n%d %d", j, num ) ; 
}
// The value of num is not assigned so it will depend on the garbage value of num assigned.
// Generally most of the compiler assign value 0 for the un assigned variable So the value of j will be 0