/*
NAME:CLARENCE NJUGUNA
REG NO:CT101/G/26491/25
DESCRIPTION:PASSWORD ACCESS
*/

#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");

    return 0;
}