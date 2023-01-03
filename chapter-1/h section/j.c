#include <stdio.h>

int main() {
    int totalPopulation = 80000;
    int men = (totalPopulation * 52) / 100;
    int women = totalPopulation - men;
    int totalLiterate = (totalPopulation * 48) / 100;
    int literateMen = (totalPopulation * 35) / 100;
    int illiterateMen = men - literateMen;
    int literateWomen = totalLiterate - literateMen;
    int illiterateWomen = women - literateWomen;

    printf("Total number of illiterate men and women are %d and %d\n", illiterateMen, illiterateWomen);
}