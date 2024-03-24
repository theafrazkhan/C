# C Language HTML Parser Exercise 6

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/41_Exercise%206%20Html%20Parser.md)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/41_Exercise%206%20Html%20Parser.md
```

While using a browser, when you click right and select view page source, you will see the HTML of that website you are using at that time. HTML is the standard markup language for Web pages. So, today’s task is to write a code to “parse the sample HTML.”

## Instructions
You are given with an HTML code like,``` <h1> This is a heading </h1> ``` Your task is to parse the content written between the HTML tags. 

``` c
char string[] = "<h1> This is a heading </h1>";
```

For this task, you have to create a void function ``` parser ```, which will take a string as an argument and return the parsed content written in the HTML code. Following is the sample of input and output.

## Input:
```
<h1> This is the heading </h1>
```
 


 

## Output:
```
This is the heading
```
