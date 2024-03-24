# Dangling Pointer

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/54_Dangling_pointer.c)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/54_Dangling_pointer.c
```

Dangling pointers are pointers that are pointing to a memory location that has been already freed or deleted.

Dangling pointers often come into existence during object destruction. It happens when an object with an incoming reference is deleted or de-allocated, without modifying the value of the pointer. The pointer still points to the memory location of the deallocated memory. 

The system may itself reallocate the previously deleted memory and several unpredicted results may occur as the memory may now contain different data.

 

## Dangling pointers are caused by the following factors:
 

### 1. De-allocating or free variable memory
When memory is deallocated, the pointer keeps pointing to freed space. An example to demonstrate how that happens is:

``` c
#include <stdio.h>
int main()
{
    int a = 80;
    int *ptr = (int *)malloc(sizeof(int));
    ptr = &a;
    free(ptr);
    return 0;
}
```
The above code demonstrates how a variable pointer *ptr and an integer variable a containing a value 80 was created. The pointer variable *ptr is created with the help of the malloc() function. As we know that malloc() function returns the void, so we use int * for type conversion to convert void pointer into int pointer.

 

## 2. Function Call
Now, we will see how the pointer becomes dangling with the function call.

``` c
#include <stdio.h>
int *myvalue()
{
    int a = 10;
    return &a;
}

int main()
{
    int *ptr = myvalue();
    printf("%d", *ptr);
    return 0;
}
```
## Output:
```
Segmentation Fault!
 
```
In the above code, First, we create the main() function in which we have declared ptr pointer, which contains the return value of the func() function. When the function func() is called, the program control moves to the context of the int *func(). Then, the function func() returns the address of the integer variable a. 

This is where the program control comes back to the main() function and the integer variable a becomes unavaialbale for the rest of the program execution. And the pointer ptr becomes dangling as it points to a memory location that has been freed or deleted from the stack. Hence, the program results in a segmentation fault.

Had this code been updated, and the integer variable been declared globally which is static and as we know, any static variable stores in global memory, the output would have been 10.

 

##nHow to avoid the Dangling pointer errors
The dangling pointer introduces nasty bugs into our programs, and these bugs often result in security holes. By merely initializing the pointer value to the NULL, these errors following the creation of dangling pointer can be avoided. After that, the pointer will no longer point to the freed memory location. While the reason behind assigning the NULL value to the pointer was to have the pointer not to point to any random or previously assigned memory location.