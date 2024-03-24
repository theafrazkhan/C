# Function Pointers In C

- To understand this concept of function pointers, you should have the basic knowledge of Pointers and dynamic memory allocation. We have already discussed pointers and dynamic memory allocation in our previous lectures. The quick review of the pointer is that pointer is a variable containing another variable's address. It means it is a variable, but this variable contains any other variable's address or memory address. The pointer can be of type int, char, array, function, or any other pointer. The symbol * is used to get the value of the variable that the pointer is pointing to, and the & symbol is to get the address of the variables. In C, we can create a generic pointer like a dangling, null, etc. Now let us revise the concept of dynamic memory allocation.

- A statically allocated variable or array has a fixed size in memory. Whereas the dynamic memory allocation is a way in which the size of the data structure can be changed during runtime. The memory assigned to a program in a typical architecture can be broken down into four segments. These are code, global & static variables, stack, and heap.

To explore these concepts more in detail, check tutorial#47 for dynamic memory allocation and tutorial#26 for pointers. 

Now let us move to our main topic, "Function Pointers in C." In C programming, the pointer to a function is known as function pointer in C. In this tutorial, we will learn how to declare a function pointer in C and call a function using this pointer.

In Functions Pointers, the function name can be used to get the function address. Following is the syntax of function pointers in C.

## Function Pointer Syntax
The syntax for declaring a function pointer might seem difficult initially, but its quite straightforward once we understand what's going on. To declare the function pointer, use the following syntax:

``` c
function_return_type(*Name_of_pointer)(function arguments list)
```

## Example:-
``` c
void (*fun)(int, char);
```
In this example, fun is a pointer to a function taking two arguments, an integer and character, and that returns void. It's as if we are declaring a function called "*fun", which takes an int and char, and returns void; now, if *fun is a function, then fun must be a pointer to a function. The following are the legal way of declaring function pointers.
``` c
int (*sum)( int); //legal declaration of function pointer
int *sum(); //This is not a declaration of function pointer
```

Following is the example of function pointer:-
``` c
#include <stdio.h>
int AddNumber (int n1, int n2){
return n1+n2;
}
int main()
{
int (*fun) (int, int);
fun = AddNumber;
int res1 = fun(20, 20);
int res2 = AddNumber(20, 20);
printf("Using function pointer: %d",res1);
printf("\nUsing function name: %d",res2);
return 0;
}
```
## Some Important points regarding function pointer:
We can declare a function pointer and assign a function to it in a single statement like this:
``` c
void (*function_ptr)(int) = &fun;
```
We can remove the ampersand(&) from this statement because a function name alone represents the function address.
``` c
void (*function_ptr)(int) = fun;
 ```
