/*CLARENCE NJUGUNA
REGISTRATION NO:CT101/G/26491/25
DESCRIPTION:WATER BILL CALCULATOR 
*/
#include <stdio.h>

int main() {
    int number_of_water_units_consumed;
    double total_bills;
    int KES_per_unit;

    //prompt the user to enter the number of water units consumed
    printf("Enter your number of water units consumed: ");
    scanf("%d", &number_of_water_units_consumed);
    
    //use if-else if-else statements to calculate the total bill
    if (number_of_water_units_consumed < 30) {
        KES_per_unit = 20;
    } 
    else if (number_of_water_units_consumed >= 30 && number_of_water_units_consumed <= 60) {
        KES_per_unit = 25;
    } 
    else { // greater than 60
        KES_per_unit = 30;
    }

    //prompt user to display the total but bill in KES with 2 decimal places
    total_bills = number_of_water_units_consumed * KES_per_unit;

    printf("The total bill is KES %.2f\n", total_bills);

    return 0;
}