//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Short heading
// Description: Detailed working

//*****************************************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int length;

    printf("Enter the length of ID for user1: ");
    scanf("%d", &length);

    char *id = (char *)calloc(length + 1, sizeof(char));

    printf("Enter the Id of user1: ");
    scanf("%s", id);
    printf("The id is: ");
    printf("%s", id);

    printf("Enter the length of Id for user2: ");
    scanf("%d", &length);

    id = (char *)realloc(id, (length + 1) * sizeof(char));

    printf("Enter the Id of user2: ");
    scanf("%s", id);

    printf("The id of user2: ");
    printf("%s", id);

    printf("Enter the length of Id for user3: ");
    scanf("%d", &length);

    id = (char *)realloc(id, (length + 1) * sizeof(char));

    printf("Enter the Id of user3: ");
    scanf("%s", id);

    printf("The id of user3: ");
    printf("%s", id);

    free(id);

    return 0;
}