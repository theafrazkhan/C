# C Unions

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/39_Unions.c)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/39_Unions.c
```

Just like Structures, the union is a user-defined data type.  All the members in unions share the same memory location. The union is a data type that allows different data belonging to different data types to be stored in the same memory locations. One of the advantages of using a union is that it provides an efficient way of reusing the memory location, as only one of its members can be accessed at a time. A union is used in the same way we declare and use a structure. The difference lies just in the way memory is allocated to their members.

 

## Defining a Union
We use the union keyword to define the union. 

### The syntax for defining a union is,

``` c
union union_name
{
    //union_elements
} structure_variable;
``` 

### Here’s one example of how a union is defined and used in main as a user defined data type.

``` c
#include <stdio.h>
 
union Books
{
    char title[20];
    char author[100];
    float price;
    int pages;
};
 
int main()
{
    union Books book1;
    return 0;
}

```
 

## Initialising and accessing union elements
Different from how we used to initialise a struct in one single statement, union elements are initialised one at a time.

 

And also, one can access only one union element at a time. Altering one union element disturbs the value stored in other union elements.

``` c
#include <stdio.h>
#include <string.h>
 
union Books
{
    char title[20];
    char author[100];
    float price;
    int pages;
};
 
int main()
{
    union Books book1;
    strcpy(book1.title, "C Programming");
    printf("%s\n", book1.title);
 
    strcpy(book1.author, "ABC");
    printf("%s\n", book1.author);
 
    book1.price = 123.99;
    printf("%f\n", book1.price);
 
    book1.pages = 300;
    printf("%d\n", book1.pages);
 
    return 0;
}
``` 

## Output:
``` 
C Programming
ABC
123.989998
300
```
 

## How are Structs and Unions similar?
- Structures and unions, both are user-defined data types used to store data of different types.
- The members of structures and unions can be objects of any type, including even other structures and unions or arrays.
- A union or a structure can be passed by value to functions and can be returned by value by functions.
- ‘.’ operator is used for accessing both union and structure members.
 

## How are Structs and Unions different?
- The keyword union is used to define a union and a keyword struct is used to define the structure
- Within a structure, each member is allocated a unique storage area of location whereas memory allocated to a union is shared by individual members of the union.
- Individual members can be accessed at a time in structures whereas only one member can be accessed at a time in unions.
- Changing the value of one of the members of a structure will not affect the values of the other members of the structure, whereas changing the value of one of the members of a union will affect the values of other members in a union.
- Several members of a structure can be initialised at once, whereas only one member can be initialised in the union.
 