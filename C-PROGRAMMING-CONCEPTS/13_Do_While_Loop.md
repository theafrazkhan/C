# do-while Loop

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/14_While_Loop.c)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/14_While_Loop.c
```
A do-while loop is a little different from a normal while loop. A do-while loop, unlike what happens in a while loop, executes the statements inside the body of the loop before checking the test condition.

So even if a condition is false in the first place, the do-while loop would have already run once. A do-while loop is very much similar to a while loop, except for the fact that it is guaranteed to execute the body at least once.

 

Unlike for and while loops, which test the loop condition first, then execute the code written inside the body of the loop, the do-while loop checks its condition at the end of the loop. 

 

## Following is the syntax of the do-while loop.
``` c
do
{
    statements;
} while (test condition);
``` 

If the test condition returns true, the flow of control jumps back up to the do part, and the set of statements in the loop executes again. This process repeats until the given test condition becomes false.

 

## How does the do-while loop work?
- First, the body of the do-while loop is executed once. Only then, the test condition is evaluated.
- If the test condition returns true, the set of instructions inside the body of the loop is executed again, and the test condition is evaluated.
- The same process goes on until the test condition becomes false.
- If the test condition returns false, then the loop terminates.
 

## One such example to demonstrate how a do-while loop works is

``` c
#include <stdio.h>
 
int main()
{
    int i = 5;
 
    do
    {
        printf("%d ", i);
        i++;
    } while (i < 5);
 
    return 0;
}
```

## Output
```
5
```

As it was already mentioned at the beginning of this tutorial, a do-while loop runs for at least once even if the test condition returns false, because the test condition is evaluated only after the first execution of the instructions in the body of the loop.

 

## Difference between a while and a do-while loop
A While loop is executed every time the given test condition returns true, whereas, a do-while loop is executed for the first time irrespective of the test condition being true or false because the test condition is checked only after executing the loop for the first time.

 