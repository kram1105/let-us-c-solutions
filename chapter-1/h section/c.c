#include <stdio.h>

int main() {
    int marks1, marks2, marks3, marks4, marks5;
    printf("Enter marks in all the five subjects.\n");
    scanf("%d%d%d%d%d", &marks1, &marks2, &marks3, &marks4, &marks5);
    int totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;
    float marksInPercentage = ((float)totalMarks * 100) / 500;
    printf("Total Marks is %d\n", totalMarks);
    printf("Total percentage is %0.2f %%\n", marksInPercentage);
}