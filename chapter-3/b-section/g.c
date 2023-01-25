#include <stdio.h>

int main() {
    int positive = 0, negative = 0, zero = 0;
    
    while (1) {
        char c;
        printf("Press y to enter more number and n for no more input\n");
        
        // I have used \n before %c in scanf because the next input is integer and when we hit enter 
        // the buffer stores the new line that is \n and it takes input in the char c in another loop
        // Read the post - https://www.quora.com/In-the-C-language-the-compiler-accepts-an-integer-after-a-character-input-while-the-vice-versa-isnt-possible-Why/answer/Keshav-Kabra-12?ch=10&oid=170464053&share=940f15ff&srid=hrMtl&target_type=answer

        scanf("\n%c", &c);
        
        // breaking condition
        if (c != 'y') {
            break;
        }

        int number;
        printf("Enter the number\n");
        scanf("%d", &number);

        if (number > 0) {
            positive++;
        } else if (number == 0) {
            zero++;
        } else {
            negative++;
        }
    }
    printf("Total number of positive numbers entered is %d\n", positive);
    printf("Total number of negative numbers entered is %d\n", negative);
    printf("Total number of zero numbers entered is %d\n", zero);
}