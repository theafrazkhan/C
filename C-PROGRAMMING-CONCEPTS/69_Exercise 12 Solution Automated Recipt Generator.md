# Automated Receipt Generator In C - Exercise 12

Today’s exercise is based on the concept of File I/O in C. If you have not watched this tutorial yet, check tutorial#62 to grasp the concept of File handling in C.The task you have to perform is to create an “Automated Receipt Generator In C ”

## Problem Statement:-
Suppose you have a template letter.txt. You have to fill in values to a template. Letter.txt looks something like this:
``` txt
Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}. Please visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon.
```

You have to write a program that will automatically fill the template.For this, read this file and replace these values:

``` c
{{name}} - Afraz 

{{item}} - Table Fan 

{{outlet}} - Afzal Electronics

```

[Solution Program ](github.com/theafrazkha)