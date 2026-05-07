#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;

    // Seed the random number generator with the current time
    srand(time(0)); 
    secret_number = rand() % 100 + 1; // Generates a number between 1 and 100

    printf("--- Welcome to the Guessing Game! ---\n");
    printf("I've picked a number between 1 and 100. Can you guess it?\n");

    // Loop until the user guesses the right number
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret_number) {
            printf("Lower! Try again.\n");
        } else if (guess < secret_number) {
            printf("Higher! Try again.\n");
        } else {
            printf("\nCorrect! You found it in %d attempts.\n", attempts);
        }

    } while (guess != secret_number);

    return 0;
}
