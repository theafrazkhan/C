# C Variables

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/05_Basic_Syntax_Of_C_Program.c)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/05_Basic_Syntax_Of_C_Program.c
```
Variables are containers for storing data values.

 

### In C, there are different types of variables.

For example

- an integer variable defined with the keyword int stores integers (whole numbers), without decimals, such as 91 or -13.
- a floating point variable defined with keyword float stores floating point numbers, with decimals, such as 99.98 or -1.23.
- a character variable defined with the keyword char stores single characters, such as 'A' or 'z'. Char values are bound to be surrounded by single quotes.
 

## Declaration
We cannot declare a variable without specifying its data type. The data type of a variable depends on what we want to store in the variable and how much space we want it to hold. The syntax for declaring a variable is simple:

``` c
data_type  variable_name;
```
OR
``` c
data_type  variable_name = value;
```
 

## Naming a Variable
There is no limit to what we can call a variable. Yet there are specific rules we must follow while naming a variable:

- A variable name can only contain alphabets, digits, and underscores(_).
- A variable cannot start with a digit.
- A variable cannot include any white space in its name.
The name should not be a reserved keyword or any special character.
 

A variable, as its name is defined, can be altered, or its value can be changed, but the same is not true for its type. If a variable is of integer type, then it will only store an integer value through a program. We cannot assign a character type value to an integer variable. We can not even store a decimal value into an integer variable.

 