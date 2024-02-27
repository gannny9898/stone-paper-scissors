#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame(int playerChoice, int computerChoice);
void printChoice(int choice);

int main() {
    srand(time(NULL));
    
    int playerChoice;
    int computerChoice = rand() % 3; 
    
    printf("Rock, Paper, Scissors\n");
    printf("Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ");
    scanf("%d", &playerChoice);
    
    if (playerChoice < 0 || playerChoice > 2) {
        printf("Invalid choice. Please enter a number between 0 and 2.\n");
        return 1; 
    }
    
    playGame(playerChoice, computerChoice);
    
    return 0;
}

void playGame(int playerChoice, int computerChoice) {
    printf("Player's choice: ");
    printChoice(playerChoice);
    
    printf("Computer's choice: ");
    printChoice(computerChoice);
    
    if (playerChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((playerChoice == 0 && computerChoice == 2) ||
               (playerChoice == 1 && computerChoice == 0) ||
               (playerChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
}

void printChoice(int choice) {
    switch (choice) {
        case 0:
            printf("Rock\n");
            break;
        case 1:
            printf("Paper\n");
            break;
        case 2:
            printf("Scissors\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}
