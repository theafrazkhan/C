# C Memory Allocation
There are ways in which we can allocate memories dynamically in a heap. We use these four standard library functions often;

 

## 1. malloc():
malloc stands for memory allocation. This inbuilt function requests memory from the heap and returns a pointer to the memory. The pointer is of the void type and we can typecast it to any other data type of our choice. 

All the values at the allocation time are initialized to garbage values. The function expects the memory space along with the size we want in bytes at the time it is used.

## Syntax:
``` c
    ptr = (ptr - type *)malloc(size_in_bytes)
 
```
## Example:
``` c
    int *ptr;
    ptr = (int *)malloc(5 *sizeof(int));
 
```
## 2. calloc():
calloc stands for contiguous memory allocation. Similar to malloc, this function also requests memory from the heap and returns a pointer to the memory. Differences lie in the way we have to call it. 

First, we have to send as parameters the number of blocks needed along with their size in bytes. Second, in ``` calloc() ```, the values at the allocation time are initialized to 0 instead of garbage value unlike what happens in ``` malloc() ````. 

## Syntax:
``` c
    ptr = (ptr - type *)calloc(n, size_in_bytes)
 
```
##Example:
``` c
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
 
```

## 3. realloc():
realloc stands for reallocation of memory. It is used in cases where the dynamic memory allocated previously is insufficient and there is a need of increasing the already allocated memory to store more data.

We also pass the previously declared memory address, and the new size of the memory in bytes while calling the function. 

## Syntax:
``` c
    ptr = (ptr - type *)realloc(ptr, new_size_in_bytes)
 
```
## Example:
``` c
    ptr = (int *)realloc(ptr,10* sizeof(int));
 
```

## 4. free():
While discussing the disadvantages of dynamic memory allocation, it was mentioned that there is no automatic deletion of dynamically allocated memory when the pointer gets overwritten. So, to manually do it, we use the ``` free() ``` function to free up the allocated memory space. Therefore, ``` free()``` is used to free up the space occupied by the allocated memory. 

We just have to pass the pointer as a parameter inside the function and the address being pointed gets freed.

## Syntax:
``` c
  free(ptr);
 ```