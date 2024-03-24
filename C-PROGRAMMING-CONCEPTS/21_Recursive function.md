# Recursive Functions
## What are recursive functions?
Recursive functions or recursion is a process when a function calls a copy of itself to work on smaller problems.

Recursion is the process in which a function calls itself directly or indirectly. And the corresponding function or function which calls itself is called a recursive function.

 

- Any function which calls itself is called a recursive function.
- This makes the life of a programmer easy by dividing a complex problem into simple or easier problems.
- A termination condition is imposed on such functions to stop them from executing copies of themselves forever or infinitely. - This is also known as the base condition.
- Any problem which can be solved recursively can also be solved iteratively.
- Recursions are used to solve tougher problems like Tower Of Hanoi, Fibonacci Series, Factorial finding, etc., and many more, where solving by intuition becomes tough.
 

## What is a base condition?
The case in which the function doesn’t recur is called the base case. 

For example, when we try to find the factorial of a number using recursion, the case when our number becomes smaller than 1 is the base case.

 

## Recursive Case
The instances where the function keeps calling itself to perform a subtask which is generally the same problem with the problem size reduced to many smaller parts, is called the recursive case.

 

## Example of recursion,

``` c

#include <stdio.h>
 
int factorial(int num)
{
    if (num > 0)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 0;
    }
}
 
int main()
{
    int ans = factorial(10);
    printf("%d", ans);
    return 0;
}

```

## Output:
```
3628800
```