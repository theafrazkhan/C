# Switch Case Statements

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/11_Switch_Case_Statements.c)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/11_Switch_Case_Statements.c
```
## What is Switch?
The control statement that allows us to make a decision effectively from the number of choices is called a switch, or a switch case-default since these three keywords go together to make up the control statement. The expression in switch returns an integral value, which is then compared with different cases. Switch executes that block of code, which matches the case value. If the value does not match with any of the cases, then the default block is executed. 

 

## Following is the syntax of switch case-default statements:

``` c
switch ( integer expression )
{  
case {value 1} :  
do this ;
 
case {value 2} :  
 do this ;  
 
case {value 3} :  
do this ;  
 
default :  
do this ;
 }
```
 

## Understanding the syntax:
The expression following the switch can be an integer expression or a character expression. The case value 1, and 2 are case labels that are used to identify each case individually. Remember, that case labels should be unique for each of the cases. If it is the same, it may create a problem while executing a program. At the end of the case labels, we always use a colon ( : ). Each case is associated with a block. A block contains multiple statements that are grouped together for a particular case.

Whenever the switch is executed, the value of test-expression is compared with all the cases present in switch statements. When the case is found, the block of statements associated with that particular case will execute. The break keyword indicates the end of a particular case. If we do not put the break in each case, then even though the specific case is executed, C's switch will continue to execute all the cases until the end is reached. The default case is optional. Whenever the expression's value is not matched with any of the cases inside the switch, then the default case will be executed. 

 

## One example where we could use the switch case statement is,

``` c
#include <stdio.h>
 
int main()
{
    int i = 2;
 
    switch (i)
    {
    case 1:
        printf("Statement 1");
        break;
 
    case 2:
        printf("Statement 2");
        break;
 
    case 3:
        printf("Statement 3");
        break;
 
    default:
        printf("No valid i to switch to.");
        break;
    }
    return 0;
}
```

## Output
```
Statement 2
```

## Different to if-else. How?
There is one problem with the if statement: the program's complexity increases whenever the number of if statements increases. If we use multiple if-else statements in the program, the code might become difficult to read and comprehend. Sometimes it also even confuses the developer who himself wrote the program. Using the switch statement is the solution to this problem.

Furthermore,

- Switch statements cannot evaluate float conditions, and the test expression can only be an integer or a character, whereas if statements can evaluate float conditions as well.
- Switch statements cannot evaluate relational operators hence they are not allowed in switch statements, whereas if statements can evaluate relational operators.
- Cases in the switch can never have variable expressions; for example, we cannot write case a +3:
 

## Rules for Switch statements
- The test expression of Switch must necessarily be an int or char.
- The value of the case should be an integer or character.
- Cases should only be inside the switch statement.
- Using the break keyword in the switch statement is not necessary.
- The case label values inside the switch should be unique. 
 

It is not necessary to use the break keyword after every case. Break keywords should only be used when we want to terminate our case at that time, otherwise we won’t.

We can also use nested switch statements i.e., switch inside another switch. Also, the case constants of the inner and outer switch may have common values without any conflicts.

 