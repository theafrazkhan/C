//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: star pattern
// Description: In this program we will be asking user to choose for ascending star pattern or descending star
// pattern and based on the desicion we will be printing the patterns
//*****************************************************************************************************

#include <stdio.h>

void star_ascending(int height);
void star_descending(int height);
int main(void)
{

    int height;
    int choise;

    while (1)
    {
        printf("\n\t\t\tThis program will print start pattern\n\nTo print ascending pattern press 1 and to print descending pattern press 2\n");
        printf("Press 0 to exit");
        scanf("%d", &choise);

        if (choise == 0)
            goto finish;

        else if (choise == 1)
        {
            printf("Enter the height: ");
            scanf("%d", &height);
            star_ascending(height);
        }
        else if (choise == 2)
        {
            printf("Enter the height: ");
            scanf("%d", &height);
            star_descending(height);
        }
        else
        {
            printf("Wrong choise:");
        }
    }

finish:
    return 0;
}

void star_ascending(int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void star_descending(int height)
{
    for (int i = height; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}