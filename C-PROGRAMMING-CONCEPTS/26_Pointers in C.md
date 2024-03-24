# C Pointers

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/26_pointers_basic_syntax.c)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/26_pointers_basic_syntax.c
```
When we initialise an array, we usually come to know about the,

- Memory block which is the space a variable gets in RAM. We can think of that space as a block.
- Name of the memory block which is the variable’s name itself.
- Content of that block that is the value stored in that variable
- Address of the memory block assigned to the variable which is a unique address that allows us to access that variable.
 

## What is a Pointer?
- Pointer is a variable that contains the address of another variable. It means, it is a variable that points to any other variable.
- Although this is itself a variable, this contains the address or memory address of any other variable.
- It can be of type int, char, array, function, or even any other pointer.
- Its size depends on the architecture.
- Pointers in C Language can be declared using *(asterisk symbol).
So, pointers are nothing but variables that store addresses of other variables, and by using pointers, we can access other variables too and can even manipulate them. 

 

## Applications of Pointers
- Pointers are used to dynamically allocate or deallocate memory using methods such as malloc(), realloc(), calloc(), and free().
- Pointers are used to point to several containers such as arrays, or structs, and also for passing addresses of containers to functions.
- Return multiple values from a function
- Rather than passing a copy of a container to a function, we can simply pass its pointer. This helps reduce the memory usage of the program.
- Pointer reduces the code and improves the performance.
 