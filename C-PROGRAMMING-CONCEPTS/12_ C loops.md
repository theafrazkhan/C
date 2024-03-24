# C Loops
In programming, we often have to perform an action, again and again, with little or no variations in the details each time they are executed. This need is met by a mechanism known as a loop.

The versatility of the computer lies in its ability to perform the set of instructions repeatedly. This involves repeating some code in the program, either a specified number of times or until a particular condition is satisfied. Loop-controlled instructions are used to perform this repetitive operation efficiently ensuring the program doesn’t look redundant at the same time due to the repetitions.

 

Following are the three types of loops in C programming.

- For loop
- While loop
- do-while loop
 

## Types of Loops
### Entry Controlled loops

In entry controlled loops, the test condition is evaluated before entering the loop body. The for Loop and the while Loop are examples of entry-controlled loops.

### Exit Controlled Loops

In exit-controlled loops, the test condition is tested at the end of the loop. Regardless of whether the test condition is true or false, the loop body will execute at least once. The do-while loop is an example of an exit-controlled loop.

 

## For Loop
A for loop is a repetition control structure that allows us to efficiently write a loop that will execute a specific number of times. The for loop working is as follows:

- The initialization statement is executed only once; in this statement, we initialize a variable to some value.
- In the second step, the test expression is evaluated. Suppose the test expression is evaluated to be true. In that case, the for loop keeps running, and the test expression is re-evaluated, but if the test expression is evaluated to false, then the for loop terminates.
- The loop keeps executing until the test expression is false. When the test expression is false, then the loop terminates. 
 

## While loop
While loop is called a pre-tested loop. The while loop allows code to be executed multiple times, depending upon a boolean condition that is given as a test expression. While introducing for loops, we saw that the number of iterations is known, whereas while loops are used in situations where we do not know the exact number of iterations of the loop. The while loop execution is terminated based on the test condition which evaluates to either true or false.


-- do-while loop
In do-while loops, the execution is terminated based on the test condition, very similar to how it is done in a while loop. The main difference between the do-while loop and while loop is that, in the do-while loop, the condition is tested at the end of the loop body, whereas the other two loops are entry-controlled. In a do-while loop, the loop body will execute at least once irrespective of the test condition.

 

Sometimes, while executing a loop, it becomes necessary to jump out of the loop. For this, we make use of the break statement and the continue statement.

## break statement
Whenever a break statement is encountered in a loop, the loop is terminated regardless of what kind of loop we are in and the program continues with the statement following the loop.

## continue statement
Whenever a continue statement is encountered in a loop, it will cause the control to go directly to the test condition which is where the loop starts, ignoring any piece of code following the continue statement. 