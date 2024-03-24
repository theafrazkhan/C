//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Passing array to a function
// Description: In this prgram we will discover whole new methods to pass array to a function, read the
// attached documentation to learn more about it
//*****************************************************************************************************

#include <stdio.h>

int func1(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n", i, arr[i]);
    }
    return 0;
}

int func2(int arr[])
{
    arr[2] = 654;
    return 0;
}

// Func3 will be accepting a pointer unlike the above two and will be using pointer arithmetic to manipulate array

void func3(int *arr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n", i, *(arr + i)); // derefrencing value after pointer addition
    }

    // we can also change the value in original array through pointers

    *(arr + 2) = 6574;
}
int main(void)
{

    int arr[] = {3, 4, 3, 2};

    func1(arr); // Name of array is basically a pointer to that array or 0th index of that array

    // can we change any member of array using a function??

    printf("the value at index 2 is %d\n", arr[2]);

    func2(arr); // Since array is passed as a pointer so no copy of array is made, instead change is made to
                // the original values.
    printf("the value at index 2 is %d\n", arr[2]);

    // Sending array to func 3

    printf("\nFunc3 in action from here: \n\n");

    func3(arr);

    return 0;
}