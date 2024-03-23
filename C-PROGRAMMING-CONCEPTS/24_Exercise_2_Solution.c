//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Exercise 2 Solution: Unit conversions using c
// Description: This program will convert kms into miles, inches into feet, centimeter into inches, pound into kgs
// inches into meters

//*****************************************************************************************************

#include <stdio.h>

float km_mile(float km);
float inch_feet(float inch);
float cm_inch(float cm);
float pound_kg(float pound);

int main(void)
{
    int choise;
    float inches, kilometers, Centimeters, pounds;

    printf("//*************************************************************************************************\n");
    printf("\tThis program will convert the following\n");
    printf("\t1. kilometers  into miles\n\t2. Inches  into feets\n\t3. Centimeters  into inches\n\t4. pounds into kgs\n");
    printf("//*************************************************************************************************");

    printf("\nEnter your choise: ");
    scanf("%d", &choise);

    switch (choise)
    {
    case 1:

        printf("Enter kilometers: ");
        scanf("%f", &kilometers);

        printf("%.2f kilometers equals %.2f miles\n", kilometers, km_mile(kilometers));

        break;

    case 2:

        printf("Enter Inches: ");
        scanf("%f", &inches);

        printf("%.2f inches equals %.2f feets\n", inches, inch_feet(inches));

        break;

    case 3:

        printf("Enter Centimeters: ");
        scanf("%f", &Centimeters);

        printf("%.2f Centimeters equals %.2f inches\n", Centimeters, cm_inch(Centimeters));

        break;

    case 4:

        printf("Enter pounds: ");
        scanf("%f", &pounds);

        printf("%.2f pounds equals %.2f kgs\n", kilometers, pound_kg(pounds));

        break;
    default:

        printf("\nWe got limited conversions only, please try from the list given\n");
    }

    return 0;
}

float km_mile(float km)
{
    float mile = km / 1.609;
    return mile;
}
float inch_feet(float inch)
{
    float feet = inch / 12;
    return feet;
}
float cm_inch(float cm)
{
    float inch = cm / 2.54;
    return inch;
}
float pound_kg(float pound)
{
    float kg = pound / 2.2;
    return kg;
}