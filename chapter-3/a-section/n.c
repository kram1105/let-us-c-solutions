#include <stdio.h>

int main() {
    char x ; 
    for ( x = 0 ; x <= 255 ; x++ )  {
      printf ( "\nAscii value %d Character %c", x, x ) ;  
    }
}
// This is a good problem. The for loop while be running infinitely becuase the C char datatype ranges
// from -128 to 127. So when the ASCII value of x reaches to 127 then after incrementing will cause it overflow
// and the value will again start from -128 and so on
