//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: File io Exercise
// Description: You have to fill in values in a templete letter.txt

// Use file functions to acheive the same

//*****************************************************************************************************

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void parser(char *string, char *result);

int main(void)
{
    char name[20], outlet[20], item[20];

    printf("Please enter your name: ");
    scanf("%s", name);

    printf("Please enter outlet name: ");
    scanf("%s", outlet);

    printf("Please enter item name: ");
    scanf("%s", item);

    // getting the size of templete to dinamically allocate string for better memory management

    int count = 0;
    char alpha = 'a';

    FILE *fptr = fopen("data.txt", "r");

    while (!feof(fptr))
    {
        fscanf(fptr, "%c", &alpha);
        count++;
    }
    char my_file[count + 2];

    fclose(fptr);
    fptr = fopen("data.txt", "r");

    // Now reading the file into my file char array;

    my_file[count + 1] = '\0';
    int iterator = 0;
    while (!feof(fptr))
    {
        fscanf(fptr, "%c", &my_file[iterator]);
        iterator++;
    }

    fclose(fptr);

    char result[count + 30];

    printf("The file contains: %s\n", my_file);
    printf("count is %d\n my_file is %d", count, strlen(my_file));

    return 0;
}

void parser(char *string, char *result)
{
    int in = 0;
    int index = 0;

    for (int i = 0, length = strlen(string); i < length; i++)
    {
        if (string[i] == '{' && string[i + 1] == '{')
        {
            in = 1;
            result[i];
            continue;
        }
        else if (string[i] == '}' && string[i + 1] == '}')
        {
            in = 0;
            continue;
        }
        if (in = 1)
        {
        }
    }
}