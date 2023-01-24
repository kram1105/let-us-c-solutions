#include <stdio.h>

int main() {
    int j ; 
    while ( j <= 10 ) 
    { 
        printf ( "\n%d", j ) ; 
        j = j + 1 ; 
    }
}

// The output of this program depends on the garbage value of j. If it is initialized less than 10
// then while loop will be executed, else it will not be printing anything