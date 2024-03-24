//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: b) Using pointers in manipulating arra
// Description: Detailed working

//*****************************************************************************************************

#include <stdio.h>

int main(void)
{

    int arr[] = {1, 2, 3, 4, 5, 6, 76};

    printf("The adress of the first element of array is %d\n", &arr[0]);
    printf("The adress of the first element of array is %d\n", arr);

    printf("The adress of the second element of array is %d\n", &arr[1]);
    printf("The adress of the second element of array is %d\n", arr + 1);

    printf("The adress of the third element of array is %d\n", &arr[2]);
    printf("The adress of the third element of array is %d\n", arr + 2);

    printf("The adress of the forth element of array is %d\n", &arr[3]);
    printf("The adress of the forth element of array is %d\n", arr + 3);

    printf("The adress of the fifth element of array is %d\n", &arr[4]);
    printf("The adress of the fifth element of array is %d\n", arr + 4);

    printf("The adress of the sixth element of array is %d\n", &arr[5]);
    printf("The adress of the sixth element of array is %d\n", arr + 5);

    printf("The adress of the seventh element of array is %d\n", &arr[6]);
    printf("The adress of the seventh element of array is %d\n", arr + 6);

    printf("The adress of the eighth element of array is %d\n", &arr[7]);
    printf("The adress of the eighth element of array is %d\n", arr + 7);

    // Using dereferencing operator to print the values stored in the array

    printf("The value at first element of array is %d\n", *(arr));
    printf("The value at second element of array is %d\n", *(arr + 1));
    printf("The value at third element of array is %d\n", *(arr + 2));
    printf("The value at forth element of array is %d\n", *(arr + 3));
    printf("The value at fifth element of array is %d\n", *(arr + 4));
    printf("The value at sixth element of array is %d\n", *(arr + 5));
    printf("The value at seventh element of array is %d\n", *(arr + 6));
    printf("The value at eighth element of array is %d\n", *(arr + 7));

    // The same can be acheived by using a for loop

    for (int i = 0; i < 7; i++)
    {
        printf("The value at %dth element of array is %d\n", i, *(arr + i));
    }

    // Concluding that there are basically three ways to access any index of an array
    // Which are summerize below for value at index 5

    printf("value at fifth index  of array is %d\n", arr[5]);
    printf("value at fifth index  of array is %d\n", *(&arr[5]));
    printf("value at fifth index  of array is %d\n", *(&arr + 5));

    return 0;
}