#include <stdio.h>

int main() {
    int i = 0;
    for(;i;)
        printf ( "\nHere is some mail for you" ) ;
}
// The following for loop will not be executed as the condition block has value i which is 0 which means false
// So it will not print anything