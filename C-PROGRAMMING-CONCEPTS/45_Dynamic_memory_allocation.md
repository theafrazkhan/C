# C Memory Layout

## [Practice this concept with Source code ](https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/45_Dynamic_memory_allocation.c)

```
 https://github.com/theafrazkhan/C/blob/main/C-PROGRAMMING-CONCEPTS/45_Dynamic_memory_allocation.c
```

## What is Dynamic Memory?
Any allocation of memory space during the runtime of the program is called dynamic memory allocation. The concept of dynamic memory allocation is used to reduce the wastage of memory, and it is the optimal way of memory allocation. 

 

##Memory Allocation in C
Memory allocation in C can be divided into four segments. 

 

### 1. Code:

Code composes of all the text segments of our program. Everything we do as a programmer to build a program falls into this category.

 

### 2. Variables:

Declarations of both global and static variables come into this segment. Global variables can be used anywhere in the program, while static has its limitations inside the function. 

 

### 3. Stack:

A stack is a data structure. Initially, the stack looks like an empty bucket in which the last entry to be inserted will be the first one to get out. It is also known as a LIFO data structure i.e., last in first out.

Suppose the program starts executing a function named A, then this function A gets pushed into the stack. Now, if function A calls another function B during its execution, then function B will also get pushed into the stack, and the program will start executing B. Now, if B calls another function C, then the program will push C into the stack and will start with its execution. Now, after the program gets done with the execution of C, the program will pop C from the stack as it was the last one to get pushed and start executing B. When B gets executed completely, it will get popped and A will start executing further until the stack becomes empty. 

 

### 4. Heap:

Heap is a tree-based data structure. It is used when we allocate memory dynamically. To use the heap data structure, we have to create a pointer in our main function that will point to some memory block in a heap. The disadvantage of using a heap is that the memory assigned to a pointer will not get freed automatically when the pointer gets overwritten. 

 

## Differences between static and dynamic memory
|Static| Dynamic|
|:-----|:-------|
|Allocation of memory before execution|Allocation of memory at run time|
|Non-reusable memory|Reusable memory|
|Less optimal way| More optimal way|

