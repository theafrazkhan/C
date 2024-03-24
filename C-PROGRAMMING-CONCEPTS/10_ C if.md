# C if...else statements

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/10_If_Else_Control_Statements.c)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/10_If_Else_Control_Statements.c
```

Sometimes, we wish to execute one set of instructions if a particular condition is met, and another set of instructions if it is not. This kind of situation is dealt with in C language using a decision control system. 

The condition for the if statement is always enclosed within a pair of parentheses. If the condition is true, then the set of statements following the if statement will execute. And if the condition evaluates to false, then the statement will not execute, instead, the program skips that enclosed part of the code.

An expression in if statements are defined using relational operators. Comparing two values using relational operators allows us to determine whether they are equal, unequal, greater than, or less than.

If we want to execute a particular code in some situation and its vice versa /opposite/or different code if that situation doesn’t occurs then if..else statements can be used. Its all depend on the condition. If the condition returns true value the situation has occurred and the true part of code will be executed and if condition returns false value false part of the code will be executed

 

| Conditions|Meaning|
|a==b|a is equal to b|
|a!=b|a is not equal to b|
| a<b| a is less than b|
|a>b | a is greater than b|
|a<=b| a is less than or equal to b|
|a>=b|a is greater than or equal to b|

 

The statement written in an if block will execute when the expression following if evaluates to true. But when the if block is followed by an else block, then when the condition written in the if block turns to be false, the set of statements in the else block will execute.

## Following is the syntax of if-else statements:

``` c
if ( condition ){
statements;}
 else {
statements;}
 ```

##One example where we could use the if-else statement is:

``` c
#include <stdio.h>
 
int main()
{
    int num = 10;
    if (num <= 10)
    {
        printf("Number is less than equal to 10.");
    }
    else
    {
        printf("Number is greater than 10.");
    }
    return 0;
}
```
## Output

```
Number is less than equal to 10.
```

## Ladder if-else
If we want to check the multiple conditions then ladder if else can used. If the previous condition returns false then only next condition will be checked.

## syntax-

``` c
if(/*conditon*/)
{
//statements
}
else if(/*condition*/)
{
statements
}
else if(/*condition*/)
{
statements
}
```

## Nested if-else

We can also write an entire if-else statement within either the body of another if statement or the body of an else statement. This is called the ‘nesting’ of ifs.
``` c
if(/*condition*/)
{
if(/*condition*/)
{
//statements
}
else
{
//statements
}
}
```