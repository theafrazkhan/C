//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Rock, paper, scissor Game
// Description: In this program we are going to make an interactive game, rock paper scissor. get documented on
// how it works

// player 1: user
// player 2: computer
// rock vs scissor: rock wins
// paper vs scissor: scissor wins
// paper vs rock: paper wins

//*****************************************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randnum();
void printchoise(int choise);
void winner(int computer_choise, int player_choise, int *computer_score, int *player_score);

int main(void)
{
    int computer_score = 0, player_score = 0;
    int computer_choise, player_choise;
    printf("Welcome to the Game|| Rock Paper Scissor \n\n");
choise:

    for (int i = 0; i < 3; i++)
    {

        printf("Choose 1 for rock, 2 for paper, 3 for scissor\n");
        printf("Player 1: ");
        scanf("%d", &player_choise);

        // validating the input
        switch (player_choise)
        {
        case 1:
        case 2:
        case 3:
            break;
        default:
            goto choise;
        }

        printf("Player 1 : ");
        printchoise(player_choise);

        printf("Computer: ");
        computer_choise = randnum();

        printchoise(computer_choise);
        printf("\n");

        // calling function to add score by reference

        winner(computer_choise, player_choise, &computer_score, &player_score);
    }

    if (computer_score == player_score)
    {
        printf("Its a draw!\n");
    }

    if (computer_score > player_score)
    {
        printf("Computer wins!\n");
    }

    if (computer_score < player_score)
    {
        printf("Player wins!\n");
    }

    printf("Computer scored %d| player scored %d\n", computer_score, player_score);

    return 0;
}

int randnum()
{
    // Your code goes here
}

void printchoise(int choise)
{
    // Your code goes here

    // it should print , Rock, paper, scissor
    //  0 for rock, 1 for paper, 2 for scissor
}

// Passing scores by reference
void winner(int computer_choise, int player_choise, int *computer_score, int *player_score)
{
    // Your code goes here
    // rock vs scissor: rock wins
    // paper vs scissor: scissor wins
    // paper vs rock: paper wins
    // input: 1 for rock, 2 for paper, 3 for scissor
}
