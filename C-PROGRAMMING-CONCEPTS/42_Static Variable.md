# C Static Variables
## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/42_Static_variable.c)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/42_Static_variable.c
```

## A. Local Variables
Local variables are variables that are declared inside a function or a block of code. These variables cannot be accessed outside the function they are declared in. Local variables can be accessed only by statements that are inside that function or block of code which means the scope of these variables will be within the function only.

 

## B. Global Variables
Global variables are variables that are defined outside of all the functions. Global variables hold their values, and we can access them inside any of the functions defined in the program. When we define global variables, the system automatically initializes them.

If cases where we have both the local and global variables with the same name declared, the local variable takes preference.

 

## C. Static Variables
A static variable is a variable that retains its value even after the program exits the scope it was declared in. Static variables retain their value and are not initialized again in the new scope. The memory assigned to a static variable stays until the end of the program is reached, whereas a normal variable is destroyed when a function it was declared in gets exited. They can be defined inside or outside the function. Static variables are local to the block. The default value of a static variable is zero. The keyword static is used to declare a static variable.

## Syntax:
``` c
static datatype variable_name = variable_value;
 
```
## Difference between static local and static global variables
## Static global variable

Any variable declared outside a function with a static keyword is known as a static global variable. This variable will be accessible through any of the methods in the program.

 

## Static local variable

Any variable declared inside of a function with a static keyword is known as a static local variable. The scope of a static local variable will be the same as that of a local variable, but its memory will be available throughout the execution of the program.

 

## Properties of static variables
A static variable will retain the value even after the program exits the scope it was declared in.
Memory allocated to a static variable is available throughout the program execution.
If we do not initialize a static variable, then the default value will be 0.