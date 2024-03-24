##C Typedef
In C programming, a typedef declaration is used to create shorter and more meaningful and convenient to use names for keywords already defined by C like int, float, and char.

 

## What is a typedef in C?
A typedef is a keyword that is used to assign alternative names to existing datatypes. We use typedef with user defined datatypes, when the names of the datatypes become slightly complicated to use in programs. Typedefs can be used to:

- Make a more complex definition reusable by abbreviating it to something less complex.
- Provide more clarity to the code
- Make it easier to change the underlying data types that we use
- Make the code more clear and easier to modify.
 

Following is the syntax for using typedef,

``` c
typedef <previous_name> <alias_name>
```

For example, we would often want to create a variable of type unsigned long. But, then it becomes a complex task if that need to declare an unsigned long comes for multiple variables. To overcome this problem, we use a typedef keyword. 

Here is how we use it.

``` c
#include <stdio.h>
typedef unsigned long ul;

int main()
{
    ul a;
}
```

## Applications of Typedef
There are various applications of typedef. Listed below are a few applications of typedef.

- The typedef can be used with arrays, primarily multi-dimensional arrays. It increase the readability of the program.
- Typedefs can also be implemented for defining a user-defined data type like structs or unions with a specific name and type.
 

Here’s how we use typedefs for defining a struct in C.

``` c
typedef struct
{
    structure element1;
    structure element2;
    structure element3;
} name_of_type 
 ```

typedef can be used for providing a pseudo name to pointer variables as well.

``` c
typedef int *ptr;
 ```

## Advantages of Typedef
- Typedef, as mentioned, increases the readability of the code. If we are using structure or function pointer or long keywords repeatedly in our code, then using typedefs increases the readability of code.
- With the help of typedef, we can use the same name for different applications even in different scopes.
- In the case of structure, if we use the typedef then we do not require to write struct keyword at the time of variable declaration.
- Typedef increases the portability of the code.
 