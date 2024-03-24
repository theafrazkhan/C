# while Loop
A While loop is also called a pre-tested loop. A while loop allows a piece of code in a program to be executed multiple times, depending upon a given test condition which evaluates to either true or false. The while loop is mostly used in cases where the number of iterations is not known. If the number of iterations is known, then we could also use a for loop.

 

## The syntax for using a while loop,

``` c
while (condition test)
{
    // Set of statements
}
```
The body of a while loop can contain a single statement or a block of statements. The test condition may be any expression that should evaluate as either true or false. The loop iterates while the test condition evaluates to true.When the condition becomes false, the program control passes to the line immediately following the loop, which means, it terminates.

 

## One such example to demonstrate how a while loop works is,

``` c
#include <stdio.h>
 
int main()
{
    int i = 0;
    while (i <= 5)
    {
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

## Properties of the while loop:
Following are some of the properties of the while loop.

- A conditional expression written in the brackets of while is used to check the condition. The Set of statements defined inside the while loop will execute until the given condition returns false.
- The condition will return 0 if it is true. The condition will be false if it returns any nonzero number.
- In the while loop, we cannot execute the loop until we do not specify the condition expression.
- It is possible to execute a while loop without any statements. This will give no error.
- We can have multiple conditional expressions in a while loop.
- Braces are optional if the loop body contains only one statement.
