#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char Choice;
    char PcChoice;
    char playAgain;

    srand(time(0));

    do {
        printf("Enter 'r' for rock, 'p' for paper, or 's' for scissors: ");
        scanf(" %c", &Choice);

        int randomValue = rand() % 3;
        if (randomValue == 0) {
            PcChoice = 'r'; 
        } else if (randomValue == 1) {
            PcChoice = 'p'; 
        } else {
            PcChoice = 's'; 
        }

        printf("Computer chose: %c\n", PcChoice);

        if (Choice == PcChoice) {
            printf("It's a draw!\n");
        } else if ((Choice == 'r' && PcChoice == 's') ||
                   (Choice == 'p' && PcChoice == 'r') ||
                   (Choice == 's' && PcChoice == 'p')) {
            printf("You win!\n");
        } else {
            printf("Computer wins!\n");
        }

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    } while (playAgain == 'y');

    printf("Thanks for playing \n");
    return 0;
}

