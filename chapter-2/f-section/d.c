#include <stdio.h>

int main() {
    float hardness, carbonContent, tensileStrength;
    printf("Enter the hardness of the steel\n");
    scanf("%f", &hardness);
    printf("Enter the carbon content of the steel\n");
    scanf("%f", &carbonContent);
    printf("Enter the tensile strength of the steel\n");
    scanf("%f", &tensileStrength);

    int grade;
    if (hardness > 5 && carbonContent < 0.7 && tensileStrength > 5600) {
        grade = 10;
    } else if (hardness > 5 && carbonContent < 0.7) {
        grade = 9;
    } else if (carbonContent < 0.7 && tensileStrength > 5600) {
        grade = 8;
    } else if (hardness > 5 && tensileStrength > 5600) {
        grade = 7;
    } else if (hardness > 5 || carbonContent < 0.7 || tensileStrength > 5600) {
        grade = 6;
    } else {
        grade = 5;
    }
    printf("The steel grade is %d\n", grade);
}