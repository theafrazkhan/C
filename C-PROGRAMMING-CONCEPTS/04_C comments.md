# C Comments

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/04_Structure_of_C_program.c)

```
https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/04_Structure_of_C_program.c
 
```
Comments can be used to insert any informative piece which a programmer does not wish to be executed. It could be either to explain a piece of code or to make it more readable. In addition, it can be used to prevent the execution of alternative code when the process of debugging is done.

Comments can be singled-lined or multi-lined.

 

## Single Line Comments
- Single-line comments start with two forward slashes (//).
- Any information after the slashes // lying on the same line would be ignored (will not be executed).
 

An example of how we use a single-line comment
``` c
#include <stdio.h>
 
int main()
{
    //This is a single line comment
    printf("Hello World!");
    return 0;
}
```
 

## Multi-line comments

- A multi-line comment starts with /* and ends with */.
- Any information between /* and */ will be ignored by the compiler.
 

An example of how we use a multi-line comment

#include <stdio.h>
 
 ``` c
int main()
{
    /* This is a
    multi-line
    comment */
    printf("Hello World!");
    return 0;
}
```
