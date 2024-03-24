# Passing Arrays As Function Arguments: C Tutorial In Hindi #


Just like variables, array can also be passed to a function as an argument. In this tutorial, we will learn how to pass the array to a function using call by value and call by reference methods (using pointers). We have already discussed how to use function calls in the previous tutorial#31

In C programming, there are various problems which requires passing more than one variable of the same type to a function. For example, consider a function in which we have to pass the marks of 70 students. Such a function requires 70 numbers to be passed as the actual parameters from the main function. Here, instead of declaring 70 different numbers and then passing them as an argument into the function, we can declare and initialize an array and pass that into the function. This will resolve all the complexity and make the code easy to read.

#### There are two ways of passing array to a function as argument:

## Declaring Function with array as a parameter
We can pass the one dimentional and multidimensional array in function as an argument. There are multiple ways to pass one-dimensional or two-dimensional arrays as arguments in function. We pass the array to a function to make it accessible within the function. When we pass an entire array to a function, then the function can access all the elemnts of the array. Single array elements can also be passed as arguments, it could be a sized or unsized array. This can be done in the same way as we pass variables to a function. Following are the syntax of passing array as an argument.

- Formal parameters as an unsized array
```
void myfunc (int arr[]) {}
```

- Formal parameters as a sized array
```
void myfunc (int arr [100]) {}
```
- Formal parameters as a two dimensional array.
```
void myfunc (int arr [3][3]) {}
```

## Example
``` c
int sum(int arr[]) {
int sum_of_array=0;
for (int i = 0; i<4; ++i) {
sum_of_array += arr[i]; 
}
return sum_of_array; 
}  

int main() {   
int result, array[] = {23,33,44,55};   
result = sum(array);     
printf("Result = %d", result);   
return 0;
} 
 
 ```


## Declaring function with pointer in the parameter:-
When we pass the address of an array while calling a function then we are using call by reference function call. When we pass an address as an argument in the function, the pointer in the function receives the address of the array.
``` c

void myfunc (int *ptr) {}
Example:-
void display(int *ptr) {
 printf("%d", *ptr);
}
int main() {
  int arr[] = {1, 2, 3, 4};
  for (int i=0; i<4; i++) {
  display(&arr[i]);
 }
return 0;
```

Remember that, when we make a change in array using pointers in the functions, the actual array will also be affected. For Example, the array element arr[1]=100, and in function we write *(ptr+1)=200, then the element which is store at arr[1] becomes equal to 200.

So, in this tutorial we have learned about two methods to pass the array as an argument in function. The first way is the most widely used technique that is declaring blank subscript notation [ ], and the second way is basically a general method that includes the use of the concept of a pointer.

 
