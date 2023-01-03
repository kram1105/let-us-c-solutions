#include <stdio.h>

int main() {
    float distanceInKm;
    printf("Enter the distance between cities in km\n");
    scanf("%f", &distanceInKm);

    float meters, feet, inches, centimeters;
    meters = 1000 * distanceInKm;
    feet = 3280.84 * distanceInKm;
    inches = 39370.08 * distanceInKm;
    centimeters = 1000000 * distanceInKm;

    printf("Distance in meters is %f\n", meters);
    printf("Distance in feet is %f\n", feet);
    printf("Distance in inches is %f\n", inches);
    printf("Distance in centimeters is %f\n", centimeters);
}