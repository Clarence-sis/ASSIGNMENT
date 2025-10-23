/*
NAME:CLARENCE NJUGUNA
REG NO:CT101\G\26491\25
DECRIPTION:CALCULATE ELECTRICITY BILL
*/

#include <stdio.h>

// Function to calculate the total electricity bill
float calculateElectricBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    float totalBill = calculateElectricBill(units);
    printf("Total electricity bill = KSh. %.0f\n", totalBill); // no decimal places

    return 0;
}