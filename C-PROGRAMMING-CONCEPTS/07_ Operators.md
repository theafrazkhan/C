# C Operators

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/07_Operators.c)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/07_Operators.c
```
Special symbols that are used to perform actions or operations are known as operators. They could be both unary or binary.

For example, the symbol asterisk (*) is used to perform multiplication in C so it is an operator and it is a binary operator.

This section covers all types of operators. 

 

## Arithmetic Operators
Arithmetic operators are used to perform mathematical operations such as addition, subtraction, etc. A few of the simple arithmetic operators are

| Operator |Description|
|:---------| :---------|
| +     | Addition |
| - | Subtraction|
| * | Multiplication|
| / | Division |
| % | Modulus|


We all must already know their purpose and how they are used in simple mathematics. Their purpose and functionality are the same.  

Modulus(%) operator- this operator returns the remainder of two operands when they are been divided

``` c
#include<stdio>
int main()
{
int x;
x=5%2;
printf("remainder is %d",x);
}
 Let’s see their implementation in C.

#include <stdio.h>
 
int main()
{
    int a = 2;
    int b = 3;
    printf("a + b = %d\n", a + b);
}
```

## Output:
```
a + b = 5
```

##Relational Operators
Relational operators are used for the comparison between two or more numbers or even expressions in cases. Same as Java, C also has six relational operators and their return value is of a Boolean type that is, either True or False (1 or 0).

| Operator | Description|
|:-------|:-------------|
|>|Greater than|
|<|Less than|
|>=| Greater than or equal to|
|<=|Less than or equal to|
|==|Is equal to|
|!=|Is not equal to|

 

## Let’s see their implementation in C

``` c
#include <stdio.h>
 
int main()
{
    int a = 2;
    int b = 3;
    printf("a == b = %d\n", a == b);
}
```
## Output:
```
a == b = 0
```
The output is 0, since a and b are not equal.

 

## Logical Operators
There are three logical operators i.e. AND, OR, and NOT. They can be used to compare Boolean values but are mostly used to compare conditions to see whether they are satisfying or not. 

- AND: it returns true when both operators are true or 1.
- OR: it returns true when either operator is true or 1.
- NOT: it is used to reverse the logical state of the operand.

|Operator | Description|
|:--------|:-----------|
|&& | AND Operator|
| || | OR Operator|
| !| NOT Operator |

 

## Let’s see their implementation in C

``` c
#include <stdio.h>
 
int main()
{
    int a = 1;
    int b = 0;
    printf("a or b = %d\n", a || b);
}
```

## Output:
```
a or b = 1
```
The output is 1, since either a or b is not equal to zero.

 

## Bitwise Operators
A bitwise operator is used to performing operations at the bit level. To obtain the results, they convert our input values into binary format and then process them using whatever operator they are being used with. 

|Operator|Description|
|:-------|:----------|
|&|Bitwise AND|
|\||Bitwise OR|
|^| Bitwise XOR|
|~|Bitwise Complement|
|>>|Shift Right Operator|
|<<|Shift Left Operator|

 

## Let’s see their implementation in C

``` c
#include <stdio.h>
 
int main()
{
    int a = 2; //10
    int b = 3; //11
    printf("a xor b = %d\n", a ^ b);
}
```

## Output:
```
a xor b = 1
```
The output is 1, since a xor b is 01 in binary, which is 1 in decimal.

 

## Assignment Operators
Assignment operators are used to assign values. We will use them in almost every program we develop.

``` c
int a = 0;
int b = 1;
```
Equal to (=) is the assignment operator here. It is assigning 0 to a and 1 to b in the above example.

 

|Operator| Description|
|:-------|:-----------|
|=| It assigns the right side operand value to the left side operand.|
|+=| It adds the right operand to the left operand and assigns the result to the left operand.|
|-=| It subtracts the right operand from the left operand and assigns the result to the left operand.|
|*=|It multiplies the right operand with the left operand and assigns the result to the left operand.|
|/= |It divides the left operand with the right operand and assigns the result to the left operand.|

