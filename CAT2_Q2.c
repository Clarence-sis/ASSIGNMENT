/*
NAME:CLARENCE NJUGUNA
REG NO:CT101/G/26491/25
DESCRIPTION:WAGE CALCULATION
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double hours, wage, grossPay, taxes, netPay;

    // Input
    cout << "Enter hours worked in a week: ";
    cin >> hours;
    cout << "Enter hourly wage: ";
    cin >> wage;

    // Gross pay calculation
    if (hours <= 40) {
        grossPay = hours * wage;
    } else {
        grossPay = (40 * wage) + ((hours - 40) * wage * 1.5);
    }

    // Tax calculation
    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Net pay
    netPay = grossPay - taxes;

    // Output
    cout << fixed << setprecision(2);
    cout << "\nGross Pay: $" << grossPay << endl;
    cout << "Taxes: $" << taxes << endl;
    cout << "Net Pay: $" << netPay << endl;

    return 0;
}