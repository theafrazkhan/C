# C NULL Pointer
A pointer that is not assigned any value or memory address but NULL is known as a NULL pointer. A NULL pointer does not point to any object, variable, or function. NULL pointers are often used to initialize a pointer variable, where we wish to represent that the pointer variable isn’t currently assigned to any valid memory address yet.

 

## This is how we define a NULL pointer,
``` c
int *ptr = NULL;
 ```

A NULL pointer generally points to a NULL or 0th memory location, so in simple words, no memory is allocated to a NULL pointer.

 

## Dereferencing a NULL pointer
The dereferencing behavior of a NULL pointer is very much similar to that of a void pointer. A NULL pointer itself is a kind of a VOID pointer and hence, we have to typecast it into any data type the way we do to a void pointer before dereferencing. Failing to do so results in an error at compile time.

 

## NULL pointer vs. Uninitialized pointer
NULL pointers and uninitialised pointers are different, as a Null pointer does not occupy any memory location. That means, it points to nowhere but to a zeroth location. In contrast, an uninitialized pointer means that the pointer occupies a garbage value address. The garbage value address is still a real memory location and hence not a NULL value. So to be on the safe side, NULL pointers are preferred. 

 

## NULL pointer vs. Void pointer
NULL pointers and void pointers very much sound similar just because oif their nomenclatures, but they are very different as a NULL pointer is a pointer with a NULL value address, and a void pointer is a pointer of void data type. Their significances are contrasting.

 

## An example of a NULL pointer is as follows,
``` c
    int *ptr = NULL;
 
```
Here, an integer pointer variable is declared with a value NULL, which means it is not pointing to any memory location. 

 

## An example of a VOID pointer is as follows,
``` c
    void *ptr;
 
```
Now, this is a void pointer. This pointer will typecast itself to any other data type as per the datatype of the value stored in it. 

 

## Advantages of a NULL pointer
We can initialize a pointer variable without allocating any specific memory location to it.
We can use it to check whether a pointer is legitimate or not. We can check that by making the pointer a NULL pointer, after which it cannot be dereferenced. 
A NULL pointer is used for comparison with other pointers to check whether that other pointer itself is pointing to some memory address or not. 
We use it for error handling in the case of C programming.
We can pass a NULL pointer at places where we do not want to pass a pointer with a valid memory address.
 