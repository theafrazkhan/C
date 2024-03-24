# Files I/O
The first and foremost thing we should know when working with files in C is that we have to declare a pointer of the file type to work with files. The syntax for declaring a pointer of file type is
``` c
    FILE *ptr;
 ```

## Modes
Functions and their modes of declarations are two important factors of file handling. We have to learn about different modes used along with these functions as a parameter. The following are the modes:

- ```r```: opens a file for reading.
- ```w```: opens a file for writing. It can also create a new file.
- ```a```: opens a file for appending.
- ```r+```: opens a file for both reading and writing but cannot create a new file.
- ```w+```: opens a file for both reading and writing.
There are many other modes, but these are the basic and most used ones.

 

## Closing a file
When working with C, closing open files is an essential step. A programmer often makes a mistake of not closing an open file. This becomes crucila because files do not automatically get closed after a program uses them. The closing has to be done manually. 

To close a file, we have to use the fclose() function. We only need to pass the pointer as a parameter to the function.

## Syntax:
``` c
fclose(ptr);
 ```

## Reading a file
Reading from a file is as easy as reading any other stuff as an input in C. We just use a file version of scanf(). In order to read from a file, we use the function fscanf(). Like scanf() used to get input from the keyboard, it gets its input from a file and prints it onto the screen. 

We have to send the file pointer as an argument for the program to be able to read it. The file has to be opened in r mode, i.e., read mode, to work properly for fscanf(). 

## Example:
``` c
#include <stdio.h>
 
int main()
{
    FILE *ptr;
    ptr = fopen("example.txt", "r");
    char str[128];
    fscanf(ptr, "%s", str);
    printf("%s", str);
}
 
 ```

The file example.txt had “Welcome_To_CodeWithHarry!” as its content, hence the output:

 ```
Welcome_To_CodeWithHarry!
 ```

## Writing to a file
Writing to a file is as easy as printing any other stuff in C. We just use a file version of ```printf()```. In order to write to a file, we use the function ```fprintf()```. For printing text inside the file, we use ```fprintf()``` as we did for printing text on the screen using ```printf()```. We have to send the file pointer as an argument for the program to be able to print it into the file. The file has to be opened in w mode, i.e. write mode, to be able to write in the file properly.

```fprintf()``` takes the pointer to the file as one of the arguments along with the text to be written.

## Example:
``` c
#include <stdio.h>
 
int main()
{
    FILE *ptr;
    ptr = fopen("example.txt", "w");
    char str[128] = "Hello World!";
    fprintf(ptr, "%s", str);
}
 
```

Output in the example.txt file:

```
Hello World!
 ```


# File modes, fgets, fputs, fgetc, fputc & more on C file handling


We have already covered file pointer, opening/closing, reading/writing to a file, and the different modes of opening a file. In this tutorial, we will see a few more built-in functions related to files in C.  By using these functions, we can read or write data from or to the files, character by character, or in the form of a full string.

## fputc():
fputc() is used to write characters to the file. The C in the name of the function stands for character. The function takes two parameters as input. The first one is the single character that we want to input to the file. The second parameter is the pointer to the file. On successful implementation, it returns the character on to the screen. If it couldn't do so in case of any other issue, it would display an EOF exception. EOF stands for End of File. You will see a lot of this exception while working with files.

## Syntax:
```
type fputc(‘character’,file_pointer);
```
## Example:
``` c
Int fputc(‘a’,ptr);
```

## fputs():
fputs() is used to write a null-terminated string to the file. The S in the name of the function stands for string.it also takes two parameters, the same as fputc(). One is the variable storing the string and the second one is the pointer to the file. A null-terminated string is a character string that can be terminated by a null character i.e., \0. You do not have to bother much about null-terminated strings as our computer automatically converts character strings to null-terminated strings.

## Syntax:
```
fputs(“string”,file_pointer);
```
## Example:
```
fputs("code with harry",ptr);
```

## fgetc():
fgetc() works exactly the opposite of fputc(). It reads the character from the file. It reads only one character at a time. We can print it as many times as we want to get the next character and so on. Its syntax is straightforward, as we have to send the file pointer as a parameter. We can store the character into another character to display it onto the screen.

## Syntax:
``` 
type = fgetc(file_pointer);
```

## Example:
``` c
c = fgetc(ptr);
```
## fgets():
fgets() is used to read a string from a file. It takes three parameters as input and stores them in a null terminated array. Now talking about the parameters, the first one is the storage array we want our string to store. The third one is the file pointer, and the second one is the count of variables we want to get from the files. For example, we want to take the first four characters from the string, so we will input the second parameter equals to 5. The purpose of doing that is that the null character will hold the fifth place.

## Note:
 Blank space is also considered as a character.

## Syntax:

```
int fgets(const char *s, int n, file_pointer);
```
## Example:
``` c
fgets(str, 5, ptr);
 ```

 