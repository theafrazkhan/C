//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Dynamic Memory Allocation
// Description: We Will be using four functions of dynamic memory allocation, i.e. malloc(), calloc(),
// realloc(), and free()

//*****************************************************************************************************

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Use of malloc()
    int n;
    printf("Enter the size of array your wanna create: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at index %d is %d\n", i, ptr[i]);
    }

    // Use of calloc()
    // Calloc() instead initialize array to zero and not to garbage and have, contigious memory location
    // is less efficient than malloc, due to more work.

    printf("Enter the size of array your wanna create: ");
    scanf("%d", &n);

    int *ptr1 = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &ptr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at index %d is %d\n", i, ptr1[i]);
    }

    // Use of realloc()

    printf("Enter the size of new array your wanna create: ");
    scanf("%d", &n);

    ptr1 = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &ptr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at index %d is %d\n", i, ptr1[i]);
    }

    free(ptr);
    free(ptr1);

    return 0;
}
