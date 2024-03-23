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
    srand(time(NULL));
    return ((rand() % 3) + 1);
}
// 0 for rock, 1 for paper, 2 for scissor

void printchoise(int choise)
{

    if (choise == 1)
    {
        printf("rock\n");
    }
    else if (choise == 2)
    {
        printf("paper\n");
    }
    else if (choise == 3)
    {
        printf("scissor\n");
    }
}

void winner(int computer_choise, int player_choise, int *computer_score, int *player_score)
{
    // rock vs scissor: rock wins
    // paper vs scissor: scissor wins
    // paper vs rock: paper wins
    // input: 1 for rock, 2 for paper, 3 for scissor
    if (computer_choise == player_choise)
    {
        // draw case: give score to both palyer and computer
        *computer_score += 1;
        *player_score += 1;
    }
    else if (computer_choise == 1 && player_choise == 2)
    {
        *player_score += 1;
    }
    else if (computer_choise == 1 && player_choise == 3)
    {
        *computer_score += 1;
    }
    else if (computer_choise == 2 && player_choise == 1)
    {
        *computer_score += 1;
    }
    else if (computer_choise == 2 && player_choise == 3)
    {
        *player_score += 1;
    }
    else if (computer_choise == 3 && player_choise == 1)
    {
        *player_score += 1;
    }
    else if (computer_choise == 3 && player_choise == 2)
    {
        *computer_score += 1;
    }
}
