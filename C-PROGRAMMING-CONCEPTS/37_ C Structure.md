# C Structures

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/37_structure.c)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/37_structure.c
```
We have already learnt in the previous tutorials that variables store one piece of information and arrays of certain data types store the information of the same data type. Variables and arrays can handle a great variety of situations. But quite often, we have to deal with the collection of dissimilar data types. For dealing with cases where there is a requirement to store dissimilar data types, C provides a data type called ‘structure’. It is a way to group together information belonging to different data types and combine them into one structure.

 

## What are Structures in C?
Structures are usually used when we wish to store data of different data types together. For example, if we want to store information about a book, there could be a number of parameters defining a book. 

Books have a title, an author name, the number of pages, and a price. All of the book attributes belong to different data types. The titles and author names must be strings, but the prices and number of pages must be numerical. 

 

One way to store the data is to construct individual arrays, and another method is to use a structure variable. It is to keep in mind that structure elements are always stored in contiguous memory locations.

 

## Creating a struct element
### Basic syntax for declaring a struct is,

``` c
struct structure_name
{
    //structure_elements
} structure_variable;
 
```

Here’s one example of how a struct is defined and used in main as a user-defined data type.

``` c
#include <stdio.h>

struct Books
{
    char title[20];
    char author[100];
    float price;
    int pages;
};

int main()
{
    struct Books book1;
    return 0;
}
 
```

## Accessing struct elements
We use the subscript operator, ‘[‘ fed with the index number to access individual elements of an array. But in the case of structures, to access any element, we use the dot operator (.). This dot operator is coded between the structure variable name and the structure member that we wish to access. 

Before the dot operator, there must always be an already defined structure variable and after the dot operator, there must always be a valid structure element.

 

Here’s one example demonstrating how we access struct elements.

``` c
#include <stdio.h>
 
struct Books
{
    char title[20];
    char author[100];
    float price;
    int pages;
};
 
int main()
{
    struct Books book1 = {"C Programming", "ABC", 123.99, 300};
    printf("%s\n", book1.title);
    printf("%s\n", book1.author);
    printf("%f\n", book1.price);
    printf("%d\n", book1.pages);
    return 0;
}
```
## Output:

``` c
C Programming
ABC
123.989998
300
 
```
## Additional Features of Structs
- We can assign the values of a structure variable to another structure variable of the same type using the assignment operator.
- Structure can be nested within another structure which means structures can have their members as structures themselves.
- We can pass the structure variable to a function. We can pass the individual structure elements or the entire structure variable into the function as an argument. And functions can also return a structure variable. 
- We can have a pointer pointing to a struct just like the way we can have a pointer pointing to an int, or a pointer pointing to a char variable.
 

## Where are Structs useful?
It is possible to use structures for many different purposes, including:

- Structures are used to store a large amount of data of varying data types.
- They are used to send data to the printer.
- For placing the cursor at an appropriate position on the screen, we can use structure.
- It can be used in drawing and floppy formatting.
- We use structures in finding out the list of equipment attached to the computer.