/*
NAME;CLARENCE NJUGUNA
REG NO:CT101/G/26491/25
DESCRIPTION:PROGRAM TO RECORD SALES TRANSACTION IN A RETAIL SHOP
*/

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;
    int n, i;

    // --- Writing section ---
    file = fopen("sales.txt", "a"); // open in append mode
    if (file == NULL) {
        printf("Error: Could not open sales.txt for writing\n");
        return 1;
    }

    printf("Enter number of transactions to record: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter amount for transaction %d: ", i + 1);
        scanf("%f", &amount);
        fprintf(file, "%.2f\n", amount); // write each transaction on a new line
    }

    fclose(file);
    printf("\nTransactions successfully recorded in sales.txt!\n\n");

    // --- Reading + totaling section ---
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt for reading\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);

    printf("Total sales for the day: %.2f\n", total);

    return 0;
}