# C VOID Pointer
After a brief discussion about pointers, it’s time to start with a very important type of pointers, void pointers and their functionalities. We already know that a void function has no return type i.e., functions that are not returning anything are given the type void. Now, in  the case of pointers that are given the datatype of a void, they can be typecasted into any other data type according to the necessity. And that aids that we do not have to decide on a data type for the pointer initially. 

 

Void pointers can also be addressed as **general-purpose pointer variables.** 

 

Let’s see a few examples that will demonstrate the functionalities of a void pointer.

 

## Example:
``` c
    int var = 1;
    void *voidPointer = &var;
```

Here, the data type of the void pointer gets typecasted into int as we have stored the address of an integer value in it.

``` c
    char x = 'a';
    void *voidPointer = &x;
    ```
In this example, the void pointer’s data type gets typecasted to char as we have stored the address of a character value in it. 

 

Type casting a void pointer must also remind you of the way we used to type cast a void pointer returned by the functions malloc() and calloc() while for dynamic memory allocation. There also, the heap returns a void pointer to the memory requested. And we could type cast it to any other data type and that is where a void pointer comes handy.

 

## Two important features of a VOID pointer are:
 

Void pointers cannot be dereferenced. 

This can be demonstrated with the help of an example.
``` c
    int a = 10;
    void *voidPointer;
    voidPointer = &a;
    printf("%d", *voidPointer);
```
## Output:
```
Compiler Error!
```
 
 

This program will throw a compile-time error, as we can not dereference a void pointer, meaning that we would compulsorily have to typecast the pointer every time it is being used. Here’s how it should be done.

``` c
    int a = 10;
    void *voidPointer;
    voidPointer = &a;
    printf("%d", *(int *)voidPointer);

```
## Output:
```
10
 ```

The compiler will not throw any error and will directly output the result because we are using the type along with the pointer. 

 

Pointer arithmetics cannot be used with void pointers since it is not holding any address to be able to increment or decrement its value.

 