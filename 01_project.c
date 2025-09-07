#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*                                         Project Name: Number Guessing Game

    Description: We will write a program that generates a random number and asks the player to guess
    it. If the player's guess is higher than the actual number, the program displays "Lower number please" .
    Similarly, if the player's guess is too low, the program prints "Higher number please".                     */


int main() {
    int number_to_guess, guessed_number, number_of_guesses = 0;

    srand(time(0)); // seed the random number generator
    number_to_guess = rand() % 100 + 1; // number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");

    for (;;) {
        printf("Guess the number (between 1 and 100): ");
        scanf("%d", &guessed_number);
        number_of_guesses++;

        if (guessed_number > number_to_guess) {
            printf("Lower number please!\n");
        } else if (guessed_number < number_to_guess) {
            printf("Higher number please!\n");
        } else {
            printf("🎉 Congratulations! You guessed the number in %d attempts!\n", number_of_guesses);
            break; // exit the loop when guessed correctly
        }
    }

    return 0;
}