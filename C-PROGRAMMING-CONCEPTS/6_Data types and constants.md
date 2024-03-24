# C Data Types & Constants
As explained previously, a variable in C must be a specified data type, and you must use a format specifier inside the printf function to display the value present in the variable

The data type specifies the size and type of information the variable will store.

## Datatype
It is the type of value which the variable holds.

Here, we will focus on the most basic ones:

| Data type  | size | Description | Format specifier |
| :----------| :----| :-----------| :----------------|
| int      | 2 or 4 bytes      | Stores whole numbers, without decimal part | %d or %i|
| float      | 4 bytes     | Stores fractional numbers, containing one or more decimals. Sufficient for storing upto 7 digits accuracy | %f |
| char       | 1 byte    | Store only a single character | %c|



## Below are some sub datatypes

| Data Type | Size | Description | Format Specifier |
|:----------|:----------|:----------|:----------|
| short int | 2 bytes | Stores whole numbers, without decimals| %sd |
|long int | 4 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits | %ld|
| unsigned short int | 2 bytes |Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits |%usd|
|unsigned long int |4 bytes |Stores a single character/letter/number, or ASCII values |%uld |

 

 

### Here’s how we make use of the data type of a variable to print it.

``` c
#include <stdio.h>
 
int main()
{
    // Creating variables having different data types
    int integer = 26;
    float floating = 39.32;
    char character = 'A';
 
    // Printing variables with the help of their respective format specifiers
    printf("%d\n", integer);
    printf("%f\n", floating);
    printf("%c\n", character);
}
```

## Output:

```
26
```
```
39.320000
```
```
A
```
 

## C Constants

- When you don't want the variables you declare to get modified intentionally or mistakenly in the later part of your program by you or others, you use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only).
- You should always declare the variable as constant when you have values that are unlikely to change, like any mathematical constant as PI.
- When you declare a constant variable, it must be assigned a value.
 

###Here’s an example of how we declare a constant.

``` c
#include <stdio.h>
 
int main()
{
    const int MOD = 10000007;
}
```