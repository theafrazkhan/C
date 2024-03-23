//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Function to reverse an array
// Description: In this program we will be writing a function that will accept an array and will reverse that array
// but wait, here is the twist, you are not allowed to use a temp variable and write the program as efficient as possible.
// Your task is to implement the function array_rev. Solution to this exercise is provided later.
//*****************************************************************************************************

#include <stdio.h>

// void array_rev(int /*dummy*/, int /*size*/);

int main(void)
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter value at index %d:", i);
        scanf("%d", &arr[i]);
    }

    printf("Values before reversing array\n");

    for (int i = 0; i < size; i++)
    {
        printf("The value at index %d is %d \n ", i, arr[i]);
    }

    printf("Values after reversing array\n");
    array_rev(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("The value at index %d is %d \n ", i, arr[i]);
    }
    return 0;
}

// void array_rev(int /*dummy*/, int /*dummy*/)
// {
//     // not using any sort of temp variable
//     for (int i = 0; i < size / 2; i++)
//     {
//         // Code goes here
//     }
// }