# C Break/Continue

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/16_Break_and_Continue.c)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/16_Break_and_Continue.c
```
## Break Statement
- Break statement is used to break the loop or switch case statements execution and brings the control to the next block of code after that particular loop or switch case it was used in.
- Break statements are used to bring the program control out of the loop it was encountered in.
- The break statement is used inside loops or switch statements in C Language.
 

## One such example to demonstrate how a break statement works is,

``` c
#include <stdio.h>
 
int main()
{
    int i = 0;
    while (1)
    {
        if (i > 5)
        {
            break;
        }
        printf("%d ", i);
        i++;
    }
 
    return 0;
}
```

## Output

```
0 1 2 3 4 5
```
Here, when i became 6, the break statement got executed and the program came out of the while loop.

 

## Continue Statement

- The continue statement is used inside loops in C Language. When a continue statement is encountered inside the loop, the control jumps to the beginning of the loop for the next iteration, skipping the execution of statements inside the body of the loop after the continue statement.
- It is used to bring the control to the next iteration of the loop.
- Typically, the continue statement skips some code inside the loop and lets the program move on with the next iteration.
- It is mainly used for a condition so that we can skip some lines of code for a particular condition.
- It forces the next iteration to follow in the loop unlike a break statement, which terminates the loop itself the moment it is encountered. 
 

## One such example to demonstrate how a continue statement works is

``` c
#include <stdio.h>
 
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i < 6)
        {
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}
```

## Output

```
6 7 8 9 10
```

Here, the continue statement was continuously executing while i remained less than 5. For all the other values of i, we got the print statement working.