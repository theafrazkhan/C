# User Input/Output
We have already learned how the printf() function is used to output values in C. Another method, which goes by the name, scanf(), is used to get user input.

 

## The scanf() function takes two arguments:

- the format specifier of the variable (as shown in the example below)
- the reference operator (&myNum), which stores the memory address of the variable. This is where the input data goes to.

## Syntax
- scanf("format specifier",&variable_name);

&-specifes the address of the variable.

## One such example demonstrates how a program takes input from the user. 
``` c
#include <stdio.h>
 
int main()
{
    int marks;
    char name[30];
    printf("Enter student's name: ");
    scanf("%s", name);
    printf("Enter marks in Maths: ");
    scanf("%d", &marks);
 
    printf("Hello %s! You have scored %d in Maths!", name, marks);
    return 0;
}
```
 

## Input

```
Enter student's name: Rohan
Enter marks in Maths: 98
```

## Output
```
Hello Rohan! You have scored 98 in Maths!
```

You must note that we didn’t have to specify the reference operator (&) in cases of strings if we have specified the size of the strings already. This is an exception.

 