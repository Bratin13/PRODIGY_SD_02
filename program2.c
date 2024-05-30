#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, userGuess, attempts = 0;

    // Seed the random number generator for different values each run
    srand(time(NULL));

    // Generate random number within a specified range (modify as needed)
    randomNumber = rand() % 100 + 1; // Range: 1 to 100

    printf("Welcome to the Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100. Can you guess it?\n");

    // Loop until user guesses correctly
    do {
        attempts++;
        printf("Enter your guess: ");
        scanf("%d", &userGuess);

        if (userGuess < randomNumber) {
            printf("Too low! Try again.\n");
        } else if (userGuess > randomNumber) {
            printf("Too high! Try again.\n");
        }
    } while (userGuess != randomNumber);

    printf("Congratulations! You guessed the number in %d attempts.\n", attempts);

    return 0;
}
