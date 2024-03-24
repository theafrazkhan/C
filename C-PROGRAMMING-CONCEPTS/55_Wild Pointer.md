# Wild Pointer
Uninitialized pointers are known as wild pointers because they point to some arbitrary memory location while they are not assigned to any other memory location. This may even cause a program to crash or behave unpredictably at times.

## For example:

``` c
    int *ptr;
```
Here, a pointer named ptr is created but was not given any value. This makes the pointer ptr, a wild pointer.

 

Declaring a pointer and not initialising it has its own disadvantages. One such disadvantage is that it will store any garbage value in it. A random location in memory will be held in it arbitrarily. This random allocation often becomes tough for a programmer to debug causing a lot of problems in the execution of the program.

 

## A. Avoiding problems due to WILD pointers

Dereferencing a wild pointer becomes problematic at times, and to avoid the them, we often prefer to convert a void pointer to a NULL pointer. By doing so, our pointer will not point to any garbage memory location, rather it will point to a NULL location. We can convert a wild pointer to a NULL pointer by merely putting it equal to NULL. 

 

## B. Dereferencing

We cannot dereference a wild pointer as we are not sure about the data in the memory it is pointing towards. In addition to causing a lot of bugs, dereferencing a wild pointer can also cause the program to crash.

 