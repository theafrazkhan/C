# Basic Structure & Syntax

## ``` [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/03_Hello_world.c) ```

Programming in C involves following a basic structure throughout. Here’s what it can be broken down to.

- Pre-processor commands
- Functions
- Variables
- Statements
- Expressions
- Comments

## Pre-processor commands
Pre-processor commands are commands which tell our program that before its execution, it must include the file name mentioned in it because we are using some of the commands or codes from this file.
They add functionalities to a program.

### One example could be,

```c 
 #include <math.h>
```

We include math.h to be able to use some special functions like power and absolute. ``` #include<filename.h> ``` is how we include them into our programs.

Detailed explanations of everything else in the structure will follow in the later part of the tutorial.

 

## Header files:
- Collection of predefined/built in functions developed

- It is always declares on heading side of program hence it is called header file

- It is identified with the extension(.h)

- It gets installed while installing IDE(integrated development environment)

- It stores functions as per their categories hence they are called library

## Syntax
An example below shows how a basic C program is written.

``` c
Declaration of header file   		//name of the header files of which functions are been used
main()	                           /*it is called main function which stores the execution of program*/
{	                                              //start of the program
              //program statements
}                                                //end of the program
```

* Here, the first line is a pre-processor command including a header file stdio.h.
* C ignores empty lines and spaces.
There is a main() function then, which should always be there.
 

A C program is made up of different tokens combined. These tokens include:

- Keywords
- Identifiers
- Constants
- String Literal
- Symbols
 

## Keywords
Keywords are reserved words that can not be used elsewhere in the program for naming a variable or a function. They have a specific function or task and they are solely used for that. Their functionalities are pre-defined.

One such example of a keyword could be return which is used to build return statements for functions. Other examples are auto, if, default, etc.

Whenever we write any keyword in IDE  their colour slightly changes and it looks different from other variables or functions for example in turbo c all keywords are turns into white colour .

 

## Identifiers
Identifiers are names given to variables or functions to differentiate them from one another. Their definitions are solely based on our choice but there are a few rules that we have to follow while naming identifiers. One such rule says that the name can not contain special symbols such as @, -, *, <, etc.

C is a case-sensitive language so an identifier containing a capital letter and another one containing a small letter in the same place will be different. For example, the three words: Code, code, and cOde can be used as three different identifiers.

## Rules for naming identifier-
1. One should not name any identifier starting with numeric value or symbol. It should start only with underscore or alphabet 
2. They should not contain space
3. Giving logical names is recommended as per our program

## Constants
Constants are very similar to a variable and they can also be of any data type. The only difference between a constant and a variable is that a constant’s value never changes.  We will see constants in more detail in the upcoming tutorial.

## String Literal
String literals or string constants are a sequence of characters enclosed in double quotation marks. For example,  “This is a string literal!” is a string literal. C method printf() utilizes the same to format the output.

 