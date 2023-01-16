#include <stdio.h>

int main() {
    int k, num = 30 ; 
    k = ( num > 5 ? ( num <= 10 ? 100 : 200 ) : 500 ) ; 
    printf ( "\n%d %d", num, k) ;
}
// The value of k is 200. This is just an example of nested conditionals