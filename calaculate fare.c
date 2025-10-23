/*
NAME:CLARENCE NJUGUNA
REG NO:CT101/G/26491/25
DESCRIPTION:CALCULATE FARE
*/

#include <stdio.h>

float calculateFare(float distance) {
    float rate = 50.0;  // KSh per km
    return distance * rate;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total Fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}