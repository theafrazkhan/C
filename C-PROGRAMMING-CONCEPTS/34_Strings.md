# String Basics
## What are Strings?
A string is an array of characters. Data of the same type are stored in an array, for example, integers can be stored in an integer array, similarly, a group of characters can be stored in a character array. This character array is also known as strings. A string is a one-dimensional array of characters that is terminated by a null (‘\0’).

 

## Declaration of Strings:
Declaring a string is very simple, the same as declaring a one-dimensional array. It’s just that we are considering it as an array of characters.

## Below is the syntax for declaring a string.

``` c
char string_name[string_size];
 ```

In the above syntax, string_name is any name given to the string variable, and size is used to define the length of the string, i.e the number of characters that the strings will store. Keep in mind that there is an extra terminating character which is the null character (‘\0’) that is used to indicate the termination of the string.

## Example of string:

``` c
#include <stdio.h>
int main()
{
    // declare and initialise string
    char str[] = "Hello there";
    printf("%s", str);
    return 0;
}
```
 

## Output:

```
Hello there
```