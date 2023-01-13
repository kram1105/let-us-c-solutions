#include<stdio.h>

int reverseNumber(int num) {
    int reversedNumber = 0;
    while (num) {
        reversedNumber = reversedNumber * 10 + num % 10;
        num = num / 10;
    }
    return reversedNumber;
}

int main() {
    int num;
    printf("Enter five digit number\n");
    scanf("%d",&num);
    int reversedNumber = reverseNumber(num);
    if (num == reversedNumber) {
        printf("Number and reverse number are equal");
    } else {
        printf("Number and reverse number are not equal");
    }
}