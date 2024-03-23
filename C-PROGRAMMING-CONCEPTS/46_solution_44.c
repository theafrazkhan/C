//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Solution to 44_exercise.c
// Description: Detailed working

//*****************************************************************************************************

#include <stdio.h>
#include <string.h>

typedef struct driver
{
    char name[50], licence[30], route[30];
    int kms;

} driver;

int main(void)
{
    driver d1, d2, d3;

    printf("Enter details for driver 1\n");

    printf("Enter the name of driver1: ");
    scanf("%s", &d1.name);
    printf("Enter the licence no. of driver1: ");
    scanf("%s", &d1.licence);
    printf("Enter the route of driver1: ");
    scanf("%s", &d1.route);
    printf("Enter the no. of kms driven of driver1: ");
    scanf("%d", &d1.kms);

    printf("Enter details for driver 2\n");

    printf("Enter the name of driver2: ");
    scanf("%s", &d2.name);
    printf("Enter the licence no. of driver2: ");
    scanf("%s", &d2.licence);
    printf("Enter the route of driver2: ");
    scanf("%s", &d2.route);
    printf("Enter the no. of kms driven of driver2: ");
    scanf("%d", &d2.kms);

    printf("Enter details for driver 3\n");

    printf("Enter the name of driver3: ");
    scanf("%s", &d3.name);
    printf("Enter the licence no. of driver3: ");
    scanf("%s", &d3.licence);
    printf("Enter the route of driver3: ");
    scanf("%s", &d3.route);
    printf("Enter the no. of kms driven of driver3: ");
    scanf("%d", &d3.kms);

    printf("*************************Detalils of Drivers*************************\n");

    printf("Details of driver 1\n");

    printf("Name of driver 1: %\n", d1.name);
    printf("licence of driver 1: %s\n", d1.licence);
    printf("Route of driver 1: %s\n", d1.route);
    printf("No of kms driven of driver 1: %d\n", d1.kms);

    printf("Details of driver 2\n");

    printf("Name of driver 2: %\n", d2.name);
    printf("licence of driver 2: %s\n", d2.licence);
    printf("Route of driver 2: %s\n", d2.route);
    printf("No of kms driven of driver 2: %d\n", d2.kms);

    printf("Details of driver 3\n");

    printf("Name of driver 3: %\n", d3.name);
    printf("licence of driver 3: %s\n", d3.licence);
    printf("Route of driver 3: %s\n", d3.route);
    printf("No of kms driven of driver 3: %d\n", d3.kms);

    return 0;
}