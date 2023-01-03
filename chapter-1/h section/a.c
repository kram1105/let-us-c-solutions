#include <stdio.h>

int main() {
    float basicSalary, dearnessAllowance,  houseRentAllowance;
    printf("Please enter Ramesh basic salary.\n");
    scanf("%f", &basicSalary);
    dearnessAllowance = 0.4 * basicSalary;
    houseRentAllowance = 0.2 * basicSalary;
    float grossSalary = basicSalary + dearnessAllowance + houseRentAllowance;
    printf("Ramesh Salary is %f\n", grossSalary);
}