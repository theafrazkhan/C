#for Loop

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/15_For_Loop.c)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/15_For_Loop.c
```
The "For" loop is used to repeat a specific piece of code in a program until a specific condition is satisfied. The for loop statement is very specialized. We use a for loop when we already know the number of iterations of that particular piece of code we wish to execute. Although, when we do not know about the number of iterations, we use a while loop. 

 

Here is the syntax of a for loop in C programming.

``` c
for (initialise counter; test counter; increment / decrement counter)
{
    //set of statements
}
```
## Here,

- __ initialize counter: __ It will initialize the loop counter value. It is usually i=0.
- __ test counter:__ This is the test condition, which if found true, the loop continues, otherwise terminates.
- __ Increment/decrement counter: __ Incrementing or decrementing the counter.
- __ Set of statements: __ This is the body or the executable part of the for loop or the set of statements that has to repeat itself.
 

## One such example to demonstrate how a for loop works is,

``` c
#include <stdio.h>
 
int main()
{
    int num = 10;
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%d ", i);
    }
    return 0;
}
```

## Output

```
0 1 2 3 4 5 6 7 8 9
```

- First, the initialization expression will initialize loop variables. The expression ``` i=0 ``` executes once when the loop starts. Then the condition ``` i < num ``` is checked. If the condition is true, then the statements inside the body of the loop are executed. After the statements inside the body are executed, the control of the program is transferred to the increment of the variable ``` i  by 1 ```. The expression ``` i++ ``` modifies the loop variables. Iteratively, the condition ``` i < num ``` is evaluated again. 
- If the condition is still evaluated true, the body of the loop will execute once again. The for loop terminates when ``` i ``` finally becomes less than num, therefore, making the condition ``` i < num ``` false.
- Just as if statement, we can have a for loop inside another for loop. This is known as a nested for loop. Similarly, while loop and do while loop can also be nested.
 

## Why for loops if we already have while loops?
It is clear to a developer exactly how many times the loop will execute. So, if the developer has to dry run the code, it will become easier. 

 