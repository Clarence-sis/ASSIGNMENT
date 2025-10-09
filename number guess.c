/*
NAME:CLARENCE NJUGUNA
REG NO:CT101/G/26491/25
DESCRIPTION:NUMBER GUESS
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess;

    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 20 (inclusive)
    secretNumber = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 20.\n");
    printf("Can you guess what it is?\n");

    // Repeat until the user guesses correctly
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the number!\n");
        }
    } while (guess != secretNumber);

    return 0;
}