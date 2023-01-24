#include <stdio.h>

int main() {
    float x = 1.1 ; 
    printf("%f", x);
    while ( x == 1.1 ) 
    { 
        printf ( "\n%f", x ) ; 
        x = x - 0.1 ; 
    }
}
// The statement in the while loop will return as false because we are comparing float value with a constant
// which has data type as double so when comparing for exact equality there will be some difference of precision
// So this while loop will not be executed.
// For more detail - https://stackoverflow.com/questions/1839422/strange-output-in-comparison-of-float-with-float-literal
